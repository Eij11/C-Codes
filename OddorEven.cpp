#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

int num;
int choice;

do{
    cout << "Odd or Even" << endl;
    cout << "Enter Number: ";
    cin >> num;

    if (num % 2 == 0){
        cout << num << " is an even number." <<endl;
    }
    else {
        cout << num << " is an odd number." <<endl;
    }

    cout << "\nPress any number keys to continue.";
    cout << "\nPress 0 to exit.";
    cout << "\nWould you like to try again? >> "; cin >> choice;
    system ("cls");
} while (choice != 0);


return 0;
}
