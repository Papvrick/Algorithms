#pragma once
#include <string>
using namespace std;

class TimePoint {
private:
    int hours;
    int minutes;
    int seconds;

    void normalize(); // ��������������� �������

public:
    // 1) ������������
    TimePoint();
    TimePoint(int h, int m = 0, int s = 0);

    // 2) ���� / �����
    void input();
    void output() const;

    // 3) ���������
    // �������
    int getHours() const; // ������� 3
    int getMinutes() const; // ������� 3
    int getSeconds() const; // ������� 3

    // �������
    void setHours(int h); // ������� 3
    void setMinutes(int m); // ������� 3
    void setSeconds(int s); // ������� 3

    // 4) ����� ��������� �����
    TimePoint operator+(const TimePoint& other) const;

    // 5) �������� ��������� �����
    TimePoint operator-(const TimePoint& other) const;

    // 6) ��������� ���� ��������� �����
    bool operator==(const TimePoint& other) const;
    bool operator!=(const TimePoint& other) const;
    bool operator<(const TimePoint& other) const;
    bool operator>(const TimePoint& other) const;
    bool operator<=(const TimePoint& other) const;
    bool operator>=(const TimePoint& other) const;

    // 7) ����� �����
    string timeOfDay() const;

    // 8) ����� �� ����������
    TimePoint timeUntil(const TimePoint& alarm) const;

    // 9) �������� ��������� �� ��������� �������
    bool willAlarmRingToday(const TimePoint& alarm) const;
};