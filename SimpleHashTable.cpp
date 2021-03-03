#include "HashNode.h"

using namespace std;

int find_value(string str){
    //string str;
    int str_val = 0;    //Value of the string with all the letters added up

    for (char& d : str){
        //cout << "ASCII value of " << d << " is " << int(d)-64 << endl;
        d = toupper(d); //converts string to uppercase
        str_val += int(d)-64;   //subtracts 64 to get the characters number in the alphabet from its ASCII value
    }

    return str_val;
}
HashNode add_value(string word){
    HashNode new_node;
    //HashNode array[50];
    int value;  //this is the key for the word in the table

    value = find_value(word);   //gets the key from here

    if (value > 50){    //if the key is larger than the array then make it fit by using the % sign
        value = value % 50;
        cout << "The value of the string is: " << value << endl;
    }
    new_node.key = value;   //these things add the information to the HashNode
    new_node.word = word;
    //new_node.next = nullptr;

    //array[new_node.key] = new_node;

    return new_node;
}

void display(HashNode array[], int value){
    cout << "Word at array " << value << " is " << array[value].word << endl;
}


int main(){
    HashNode new_node;
    HashNode array[50];

    new_node = add_value("ZXZ");
    array[new_node.key] = new_node;
    display(array, 26);

    new_node = add_value("dad");
    array[new_node.key] = new_node;
    display(array, 9);

    new_node = add_value("add");
    array[new_node.key] = new_node;
    display(array, 9);
}