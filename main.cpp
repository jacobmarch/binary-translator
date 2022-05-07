#include <iostream>

using namespace std;

int i, userInput;

void convertToBinary(int input){
    char arr[8];

    
    if (input <= 255 && input >= 0){
        for (i = 0; i < 8; i++){
            if (input % 2 == 1){
                arr[7-i] = '1';
            }
            else {
                arr[7-i] = '0';
            }
            input = input / 2;
        }
        for (i = 0; i < 8; i++){
            cout << arr[i];
        }
    }
    else if (input == -1){
        cout << "Quitting...";
    }
    else if (input < 0) {
        cout << "ERROR: Number too small";
    }
    else {
        cout << "ERROR: Number too large";
    }
    cout << endl;
}

int main(){



while (userInput != -1){

    cout << "Enter a number to convert to binary or -1 to quit: ";

    cin >> userInput;


    convertToBinary(userInput);


}
return 0;


}