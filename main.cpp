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
        cout << "Binary: ";
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

void convertToHex(int input){
    char arr[2];

    if (input >= 0 && input <= 255){
        for (i = 1; i < 3; i++){
            switch(input % 16) {
                case 0:
                    arr[2-i] = '0';
                    break;
                case 1:
                    arr[2-i] = '1';
                    break;
                case 2:
                    arr[2-i] = '2';
                    break;
                case 3:
                    arr[2-i] = '3';
                    break;
                case 4:
                    arr[2-i] = '4';
                    break;
                case 5:
                    arr[2-i] = '5';
                    break;
                case 6:
                    arr[2-i] = '6';
                    break;
                case 7:
                    arr[2-i] = '7';
                    break;
                case 8:
                    arr[2-i] = '8';
                    break;
                case 9:
                    arr[2-i] = '9';
                    break;
                case 10:
                    arr[2-i] = 'A';
                    break;
                case 11:
                    arr[2-i] = 'B';
                    break;
                case 12:
                    arr[2-i] = 'C';
                    break;
                case 13:
                    arr[2-i] = 'D';
                    break;
                case 14:
                    arr[2-i] = 'E';
                    break;
                case 15:
                    arr[2-i] = 'F';
                    break;
                default:
                    cout << "ERROR";
                    break;
            }
            input = input / 16;
        }

        cout << "Hexadecimal: ";
        for (i = 0; i < 2; i++){
            cout << arr[i];
        }
        cout << endl;

    }
}

int main(){



while (userInput != -1){

    cout << "Enter a number to convert to binary and hexadecimal; or -1 to quit: ";

    cin >> userInput;


    convertToBinary(userInput);
    convertToHex(userInput);

    cout << endl;

}
return 0;


}