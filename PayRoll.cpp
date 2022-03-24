#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

string name;

    cout << "Payroll System";
    cout << "\n====================";
        cout << "\nEmployee Name: ";
        getline(cin, name);

    cout << endl;
    cout << "What's your given shedule?";
    cout << "\n1. 09:00 - 12:00";
    cout << "\n2. 13:00 - 16:00";
    cout << "\n3. 17:00 - 20:00";
    cout << "\n====================";
    cout << endl;

int option;
int inh, outh;
int salary, hourswork;

    cin >> option;
    cout << "====================" << endl;
        switch (option){
        case 1:
        cout << "Schedule: 09:00 - 12:00" << endl;
        cout << "Enter time-in (hour: 9,10,11,12): ";
        cin >> inh;
        cout << "Enter time-out (hour: 9,10,11,12): ";
        cin >> outh;

        if (inh <= 12 && inh >= 9 || outh <= 12 && outh >=9 ){
            salary = inh - outh;
            salary *= -1;
            salary *= 90;

            hourswork = inh - outh;
            hourswork *= -1;

                if (salary == 180){
                    salary -= 60 * 2;

                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 09:00 - 12:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }

                else if (salary == 90){
                    salary -= 120 * 2;
                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 09:00 - 12:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }
                else {
                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 09:00 - 12:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }
                cout << endl;
        }
        else {
            cout << "\nInvalid time input!" << endl;
        }

        break;

        case 2:
        cout << "Schedule: 13:00 - 16:00" << endl;
        cout << "Enter time-in (hour: 13,14,15,16): ";
        cin >> inh;
        cout << "Enter time-out (hour: 13,14,15,16): ";
        cin >> outh;

        if (inh <= 16 && inh >= 13 || outh <= 16 && outh >=13 ){
            salary = inh - outh;
            salary *= -1;
            salary *= 90;

            hourswork = inh - outh;
            hourswork *= -1;

                if (salary == 180){
                    salary -= 60 * 2;

                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 13:00 - 16:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }

                else if (salary == 90){
                    salary -= 120 * 2;
                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 13:00 - 16:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }
                else {
                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 13:00 - 16:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }
                cout << endl;
        }
        else {
            cout << "\nInvalid time input!" << endl;
        }
        break;

        case 3:
        cout << "Schedule: 17:00 - 20:00" << endl;
        cout << "Enter time-in (hour: 17,18,19,20): ";
        cin >> inh;
        cout << "Enter time-out (hour: 17,18,19,20): ";
        cin >> outh;


        if (inh <= 20 && inh >= 17 || outh <= 20 && outh >=17 ){

            salary = inh - outh;
            salary *= -1;
            salary *= 90;

            hourswork = inh - outh;
            hourswork *= -1;

                if (salary == 180){
                    salary -= 60 * 2;

                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 17:00 - 20:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }

                else if (salary == 90){
                    salary -= 120 * 2;
                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 17:00 - 20:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }
                else {
                    cout << "\nEmployee Name: " << name;
                    cout << "\nSchedule: 17:00 - 20:00";
                    cout << "\nTotal number hours worked: " << hourswork;
                    cout << "\nNet Income: P" << salary;
                }
                cout << endl;

        }
        else {
            cout << "\nInvalid time input!" << endl;
        }
        break;

        default:
            cout << "\nInvalid Output!" << endl;



        }




return 0;
}
