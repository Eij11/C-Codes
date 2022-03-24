#include <iostream>>

using namespace std;

int main(){

float sub [4];
float average, sum;

    for (int i = 1; i <= 6; i++){
        cout << "\nStudent " << i;
        cout << endl;
            for (int j = 1; j <= 4; j++){
                cout << "Enter grades: "; cin >> sub[j];
                    sum += sub[j];
            }
        average = sum/4;
        cout << "Average: " << average << endl;
    }
return 0;
}
