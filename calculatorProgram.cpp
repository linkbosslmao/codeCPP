#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    double NUMBER_A , NUMBER_B; //number a and b
    int choice; // your choice
    double Answer; // the answer
    string CLIENT_ANSWER; // answer for loop
    cout << "this is a caculator program using c++" << endl;
    do {
        cout << "enter number a: ";
        cin >> NUMBER_A;
        cout << "enter number b: ";
        cin >> NUMBER_B;
        cout << "choose your calculator soluntion: " << endl;
        cout << "1.+" << endl;
        cout << "2.-" << endl;
        cout << "3.*" << endl;
        cout << "4./" << endl;
        cin >> choice;
        switch (choice){
            case 1:
                Answer = NUMBER_A + NUMBER_B;
                cout << "the answer is: " << Answer << endl;
                break;
            case 2:
                Answer = NUMBER_A - NUMBER_B;
                cout << "the answer is: " << Answer << endl;
                break;
            case 3:
                Answer = NUMBER_A * NUMBER_B;
                cout << "the answer is: " << Answer << endl;
                break;
            case 4: 
                Answer = NUMBER_A / NUMBER_B;
                cout << fixed << setprecision(16) << "the answer is: " << Answer << endl;
                break;
        }
        cout << "try another one?: "; // ask the client for loop
        cin >> CLIENT_ANSWER; // your answer
        system("clr || clear"); // clear console
    } while(CLIENT_ANSWER == "Yes" || CLIENT_ANSWER == "yes");
    return 0;
}
