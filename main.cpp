#include <iostream>
#include <fstream>


using namespace std;

int i, j, k, userInput;

ofstream outFile;


void convertToBinary(int input){
    
    char arr[8];

    
    
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
            outFile << arr[i];
        }
    outFile << "   ";
    
}

void convertToHex(int input){
    char arr[2];

    

    
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

        
        for (i = 0; i < 2; i++){
            outFile << arr[i];
        }
        outFile << "            ";

        
        

    
}

void convertNumToBCD(int input){
    char arr[4];

    
    for (i = 0; i < 4; i++){
        if (input % 2 == 1){
            arr[3-i] = '1';
        }
        else {
            arr[3-i] = '0';
        }
        input = input / 2;
    }
    for (i = 0; i < 4; i++){
        outFile << arr[i];
    }
    
    
}

void convertToBCD(int input){
    int initVal = 0;
    int newInput = input;
    int divisor = 1;
    int currNum;
    
    while (input / divisor != 0){
        initVal += 1;
        divisor *= 10;
    }

    divisor /= 10;

    

    for (k = 0; k < initVal; k++){
        currNum = newInput / divisor;
        newInput = newInput % divisor;
        convertNumToBCD(currNum);

        
        outFile << " ";
        

        divisor /= 10;


    } 

}

int main(){

outFile.open("output.txt");

outFile << "Decimal   Binary     Hexadecimal   BCD   " << endl;    

for (j=1; j < 256; j++){

    
    
    if(!outFile.is_open()){
        cout << "ERROR";
        break;
    }
    if (j < 10) {
        outFile << j << "         ";
    }
    else if (j < 100){
        outFile << j << "        ";
    }
    else {
        outFile << j << "       ";
    }
    
    convertToBinary(j);
    convertToHex(j);
    convertToBCD(j);

    
    outFile << endl;
    
}

outFile.close();

return 0;


}