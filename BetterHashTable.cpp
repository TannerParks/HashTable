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
HashNode *add_value(string word, HashNode *array[]){
    HashNode *new_node;
    //HashNode array[50];
    int value;  //this is the key for the word in the table

    value = find_value(word);   //gets the key from here

    cout << word << " has a value of " << value << endl;

    return new_node;
}

int main(){
    HashNode *new_node;
    HashNode *array[50];

    new_node = add_value("ZXZ", array);
    array[new_node->key] = new_node;

}