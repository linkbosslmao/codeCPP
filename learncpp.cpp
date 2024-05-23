#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    double NumA , NumB; //number a and b
    int choice; // your choice
    double Answer; // the answer
    string again; // answer for loop
    cout << "this is a caculator program using c++" << endl;
    do {
        cout << "enter number a: ";
        cin >> NumA;
        cout << "enter number b: ";
        cin >> NumB;
        cout << "choose your calculator soluntion: " << endl;
        cout << "1.+" << endl;
        cout << "2.-" << endl;
        cout << "3.*" << endl;
        cout << "4./" << endl;
        cin >> choice;
        switch (choice){
            case 1:
                Answer = NumA + NumB;
                cout << "the answer is: " << Answer << endl;
                break;
            case 2:
                Answer = NumA - NumB;
                cout << "the answer is: " << Answer << endl;
                break;
            case 3:
                Answer = NumA * NumB;
                cout << "the answer is: " << Answer << endl;
                break;
            case 4: 
                Answer = NumA / NumB;
                cout << fixed << setprecision(16) << "the answer is: " << Answer << endl;
                break;
        }
        cout << "try another one?: "; // ask the client for loop
        cin >> again; // your answer
        system("clr || clear"); // clear console
    } while(again == "Yes" || again == "yes");
    return 0;
}