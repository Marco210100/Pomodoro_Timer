#ifndef PROFILE_H
#define PROFILE_H

class Profile
{
public:
    Profile();

    int getHours();
    int getMinutes();
    int getBreakTime();

    void setHours(int);
    void setMinutes(int);
    void setBreakTime(int);

private:
    int m_hours;
    int m_minutes;
    int m_breakTime;
};

#endif // PROFILE_H
