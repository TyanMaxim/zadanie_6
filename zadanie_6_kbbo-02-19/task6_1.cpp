// task6_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Worker {
private:
    string name;
    int experience;
    int hourly_wag;
    int hours;

public:

    float paid, salary, premy;

    void NewName(string NName) {
        name = NName;
    }
    void NewExperience(int EExperience) {
        experience = EExperience;
    }
    void NewHourly_wag(int HHourly_wag) {
        hourly_wag = HHourly_wag;
    }
    void NewHours(int HHours) {
        hours = HHours;
    }

    void Set() {
        cout << "Enter worker's name: ";
        cin >> name;
        cout << "Enter worker's experience: ";
        cin >> experience;
        cout << "Enter worker's hourly wag: ";
        cin >> hourly_wag;
        cout << "Enter how much hours Denis has worked: ";
        cin >> hours;
    }

    void Print() {
        cout << name << endl;
        cout << "Experience is " << experience << endl;
        cout << "Hourly wage is " << hourly_wag << endl;
        cout << name << " has worked " << hours << " hours" << endl;
    }


    //salary=hours*hourly_wag;

    void SalaryPremy() {
        salary = hours * hourly_wag;
        if (experience < 1) {
            cout << "no";
            premy = 0;
        }
        else if (experience < 3 || experience >= 1) {
            premy = salary * 0.05;
        }
        else if (experience < 5 || experience >= 3) {
            premy = salary * 0.08;
        }
        else {
            premy = salary * 0.15;
        }
    }

    void PrintSalaryPremy() {
        cout << "Salary is " << salary << endl;
        cout << "Premy is " << premy << endl;
    }



};
int main() {
    Worker first;
    first.Set();
    first.Print();
    first.SalaryPremy();
    first.PrintSalaryPremy();
}