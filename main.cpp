#include <iostream>

using namespace std;

int i, userInput;

void convertToBinary(int input){
    char arr[8];

    
    if (input < 255){
        for (i = 0; i < 8; i++){
            if (input % 2 == 1){
                arr[7-i] = '1';
            }
            else {
                arr[7-i] = '0';
            }
            input = input / 2;
            cout << arr[i];
        }

    }
    else {
        cout << "Number too large";
    }
}

int main(){

cin >> userInput;
convertToBinary(userInput);

return 0;


}