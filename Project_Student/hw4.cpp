#include "hw4.h"

//Реализовать метод добавления оценки студента по дисциплине с двумя параметрами "Название дисциплины" и 
//"Оценка студента" по данной дисциплине, если оценка уже есть, она должна быть перезаписана.
void Student::addGrade(string str, int n)
{
	statistics[str] = n;
}

//Реализовать метод возвращающий оценку студента по переданной дисциплине
int Student::getGrade(string str)
{
	return statistics[str];
}

//Реализовать метод вычисляющий среднюю оценку(среднее арифметическое) студента по всем дисциплинам
double Student::getAverageGrade() 
{
    double sum = 0;
    for (auto x : statistics)
        sum += x.second;
    return sum / statistics.size();
}

//Реализовать метод возвращающий минимальную оценку студента среди всех дисциплин
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

//Реализовать метод возвращающий максимальную оценку студента среди всех дисциплин
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

//Реализовать метод выводящий сводку по студенту, его регистрационный номер, имя, его среднюю, минимальную и максимальную оценки.
void Student::printSummary() 
{
    cout << "Имя: " << name << endl;
    cout << "Регистрационный номер : " << number << endl;
    cout << "Средняя оценка: " << getAverageGrade() << endl;
    cout << "Мин. оценка: " << getMinGrade() << endl;
    cout << "Макс. оценка: " << getMaxGrade() << endl;
    cout << endl;
}

//Так же в основной  программе завести вектор структур и в отдельном файле реализовать методы, выводящие информацию по студентам, которые сдали все предметы на 5
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

//Так же в основной  программе завести вектор структур и в отдельном файле реализовать методы, выводящие информацию по студентам, которые имеют хотя бы одну 3
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

//Так же в основной  программе завести вектор структур и в отдельном файле реализовать методы, выводящие информацию по студентам, которые имеют хотя бы одну 2
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