#pragma once

#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <QUrl>
#include <QJsonObject>

class Profile
{
public:
    Profile() = default;

    Profile(int h = 0, int m = 25, int b = 5, const QUrl& l = QUrl(""))
        : m_hours(h), m_minutes(m), m_breakTime(b), m_url(l) {}

    int getHours() const { return m_hours; }
    int getMinutes() const { return m_minutes; }
    int getBreakTime() const { return m_breakTime; }
    const QUrl& getUrl() const { return m_url; }

    void setHours(int h) { m_hours = h; }
    void setMinutes(int m) { m_minutes = m; }
    void setBreakTime(int b) { m_breakTime = b; }
    void setUrl(QUrl u) { m_url = u; }
    static Profile fromJson(const QJsonObject&);
    QJsonObject toJson() const;

private:
    int m_hours;
    int m_minutes;
    int m_breakTime;
    QUrl m_url;
    
    
};

#endif // PROFILE_H
