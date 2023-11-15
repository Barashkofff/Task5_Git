#include "hw4.h"

//����������� ����� ���������� ������ �������� �� ���������� � ����� ����������� "�������� ����������" � 
//"������ ��������" �� ������ ����������, ���� ������ ��� ����, ��� ������ ���� ������������.
void Student::addGrade(string str, int n)
{
	statistics[str] = n;
}

//����������� ����� ������������ ������ �������� �� ���������� ����������
int Student::getGrade(string str)
{
	return statistics[str];
}

//����������� ����� ����������� ������� ������(������� ��������������) �������� �� ���� �����������
double Student::getAverageGrade() 
{
    double sum = 0;
    for (auto x : statistics)
        sum += x.second;
    return sum / statistics.size();
}

//����������� ����� ������������ ����������� ������ �������� ����� ���� ���������
int Student::getMinGrade() 
{
    int minGrade = INT_MAX;
    for (auto x: statistics)
    {
        if (x.second < minGrade)
            minGrade = x.second;
    }
    return minGrade;
}

//����������� ����� ������������ ������������ ������ �������� ����� ���� ���������
int Student::getMaxGrade()
{
    int maxGrade = INT_MIN;
    for (auto x : statistics)
    {
        if (x.second > maxGrade)
            maxGrade = x.second;
    }
    return maxGrade;
}

//����������� ����� ��������� ������ �� ��������, ��� ��������������� �����, ���, ��� �������, ����������� � ������������ ������.
void Student::printSummary() 
{
    cout << "���: " << name << endl;
    cout << "��������������� ����� : " << number << endl;
    cout << "������� ������: " << getAverageGrade() << endl;
    cout << "���. ������: " << getMinGrade() << endl;
    cout << "����. ������: " << getMaxGrade() << endl;
    cout << endl;
}

//��� �� � ��������  ��������� ������� ������ �������� � � ��������� ����� ����������� ������, ��������� ���������� �� ���������, ������� ����� ��� �������� �� 5
void passedAllFor5(vector<Student> vec)
{
    for (auto x : vec)
    {
        bool flag = true;
        for (auto y : x.statistics)
        {
            if (y.second != 5)
                flag = false;
        }
        if (flag)
            x.printSummary();
    }
}

//��� �� � ��������  ��������� ������� ������ �������� � � ��������� ����� ����������� ������, ��������� ���������� �� ���������, ������� ����� ���� �� ���� 3
void haveLeastOne3(vector<Student> vec)
{
    for (auto x : vec)
    {
        bool flag = false;
        for (auto y : x.statistics)
        {
            if (y.second == 3)
                flag = true;
        }
        if (flag)
            x.printSummary();
    }
}

//��� �� � ��������  ��������� ������� ������ �������� � � ��������� ����� ����������� ������, ��������� ���������� �� ���������, ������� ����� ���� �� ���� 2
void haveLeastOne2(vector<Student> vec)
{
    for (auto x : vec)
    {
        bool flag = false;
        for (auto y : x.statistics)
        {
            if (y.second == 2)
                flag = true;
        }
        if (flag)
            x.printSummary();
    }
}