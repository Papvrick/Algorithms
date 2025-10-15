#include <iostream>
#include "TimePoint.h"
using namespace std;

int main() {

    // 1) �������� ��������
    TimePoint now(10, 30, 0);
    cout << "Current time: ";
    now.output();
    cout << " � " << now.timeOfDay() << endl; // ����������� ������� �����(7)

    // 2) ���� �������
    cout << "\nEnter the alarm time:\n";
    TimePoint alarm;
    alarm.input();

    cout << "The alarm clock is set to: ";
    alarm.output();
    cout << endl;

    // 8) ����� �� ����������
    TimePoint left = now.timeUntil(alarm);
    cout << "Time until alarm: ";
    left.output();
    cout << endl;

    // 9) �������� ��������� �� ��������� �������
    if (now.willAlarmRingToday(alarm)) {
        cout << "Alarm will ring today" << endl;
    }
    else {
        cout << "Alarm will ring tomorrow" << endl;
    }

    // 3) ���� ����������
    cout << "\nAccessors test:" << endl;
    cout << "Hours: " << now.getHours() << endl;
    cout << "Minutes: " << now.getMinutes() << endl;
    cout << "Seconds: " << now.getSeconds() << endl;

    // ���� �����/�������� ��������� �����(4-5)
    cout << "\nAddition/subtraction test:" << endl;
    TimePoint t1(10, 30, 0);
    TimePoint t2(2, 45, 30);
    TimePoint sum = t1 + t2;
    TimePoint diff = t1 - t2;
    cout << "t1 + t2 = "; sum.output(); cout << endl;
    cout << "t1 - t2 = "; diff.output(); cout << endl;

    // ���� ���������(6)
    cout << "\nComparison test:" << endl;
    cout << "t1 == t2: " << (t1 == t2) << endl;
    cout << "t1 < t2: " << (t1 < t2) << endl;
    cout << "t1 > t2: " << (t1 > t2) << endl;

    return 0;
}