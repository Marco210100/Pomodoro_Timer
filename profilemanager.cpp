#include "profilemanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>

ProfileManager::ProfileManager()
{
    m_path = getStandardPath();
}

QList<Profile> ProfileManager::loadFromFile()
{
    QList<Profile> list;
    QFile file(m_path);
    if (file.open(QIODevice::ReadOnly))
    {
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        QJsonArray arr = doc.array();
        for (const QJsonValue& val : arr)
        {
            list.append(Profile::fromJson(val.toObject()));
        }
        file.close();
    }

    return list;
}

bool ProfileManager::saveToFile(const QList<Profile>& profiles)
{
    QJsonArray arr;
    for (const Profile& p : profiles)
    {
        arr.append(p.toJson());
    }

    QJsonDocument doc(arr);
    QFile file(m_path);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(doc.toJson());
        file.close();
        return true;
    }
    return false;
}

QString ProfileManager::getStandardPath()
{
    QString directory = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkdir(directory);
    return directory + "/profiles.json";
}
