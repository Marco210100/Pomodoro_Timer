#ifndef PROFILEMANAGER_H
#define PROFILEMANAGER_H
#include <QList>
#include "profile.h"
#include <QStandardPaths>
#include <QDir>

class ProfileManager
{
public:
    ProfileManager();
    static QList<Profile> loadFromFile();
    static bool saveToFile(const QList<Profile>& profiles);

private:
    static QString m_path;
    QString getStandardPath();
};

#endif // PROFILEMANAGER_H
