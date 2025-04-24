#ifndef PROFILEMANAGER_H
#define PROFILEMANAGER_H
#include <QList>
#include "profile.h"

class ProfileManager
{
public:
    static QList<Profile> loadFromFile(const QString& path);
    static bool saveToFile(const QList<Profile>& profiles, const QString& path);
};

#endif // PROFILEMANAGER_H
