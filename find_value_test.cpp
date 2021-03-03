#include <iostream>

using namespace std;

int main(){
    string str;
    int str_val = 0;    //Value of the string with all the letters added up
    cout << "Enter a word: ";
    cin >> str;

    for (char& d : str){
        //cout << "ASCII value of " << d << " is " << int(d)-64 << endl;
        d = toupper(d); //converts string to uppercase
        str_val += int(d)-64;   //subtracts 64 to get the characters number in the alphabet from its ASCII value
    }
    cout << "The value of the string is: " << str_val << endl;

    return 0;
}