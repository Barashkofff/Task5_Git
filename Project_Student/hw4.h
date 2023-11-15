#pragma once
#include <assert.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

//структура для хранения данных о студенте
struct Student
{
    //имя студента
	string name;
    //регистрационный номер студента
	int number;
    //статистика по оценкам
    map<string, int> statistics;
    //конструктор структуры Student
    Student(string s_name, int s_number)
    {
        name = s_name;
        number = s_number;
    }
    //добавляет оценку студента по дисциплине с двумя параметрами "Название дисциплины" и "Оценка студента"
    void addGrade(string, int);
    //возвращает оценку студента по переданной дисциплине
    int getGrade(string);
    //вычисляет среднюю оценку(среднее арифметическое) студента по всем дисциплинам
    double getAverageGrade();
    //возвращает минимальную оценку студента среди всех дисциплин
    int getMinGrade();
    //возвращает максимальную оценку студента среди всех дисциплин
    int getMaxGrade();
    //выводит сводку по студенту
    void printSummary();
};
//выводит информацию по студентам, которые сдали все предметы на 5
void passedAllFor5(vector<Student>);
//выводит информацию по студентам, которые имеют хотя бы одну 3
void haveLeastOne3(vector<Student>);
//выводит информацию по студентам, которые имеют хотя бы одну 2
void haveLeastOne2(vector<Student>);