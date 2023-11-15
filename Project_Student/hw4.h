#pragma once
#include <assert.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

//��������� ��� �������� ������ � ��������
struct Student
{
    //��� ��������
	string name;
    //��������������� ����� ��������
	int number;
    //���������� �� �������
    map<string, int> statistics;
    //����������� ��������� Student
    Student(string s_name, int s_number)
    {
        name = s_name;
        number = s_number;
    }
    //��������� ������ �������� �� ���������� � ����� ����������� "�������� ����������" � "������ ��������"
    void addGrade(string, int);
    //���������� ������ �������� �� ���������� ����������
    int getGrade(string);
    //��������� ������� ������(������� ��������������) �������� �� ���� �����������
    double getAverageGrade();
    //���������� ����������� ������ �������� ����� ���� ���������
    int getMinGrade();
    //���������� ������������ ������ �������� ����� ���� ���������
    int getMaxGrade();
    //������� ������ �� ��������
    void printSummary();
};
//������� ���������� �� ���������, ������� ����� ��� �������� �� 5
void passedAllFor5(vector<Student>);
//������� ���������� �� ���������, ������� ����� ���� �� ���� 3
void haveLeastOne3(vector<Student>);
//������� ���������� �� ���������, ������� ����� ���� �� ���� 2
void haveLeastOne2(vector<Student>);