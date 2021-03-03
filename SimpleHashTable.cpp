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
HashNode add_value(string word, int value){
    if (value > 50){
        value = value % 50;
        cout << "The value of the string is: " << value << endl;
    }
    HashNode new_node;
    new_node.key = value;
    new_node.word = word;
    new_node.next = nullptr;
    return new_node;
}


int main(){
    string str;
    int value;
    cout << "Enter a word: ";
    cin >> str;
    value = find_value(str);
    //cout << value << endl;
    cout << "The value of the string is: " << value << endl;

    HashNode node;
    node = add_value(str, value);
    //node.key = value;
    //node.word = str;
    //node.next = nullptr;
    HashNode array [50];
    array [node.key] = node;

    std::cout << "Node at " << node.key << " is " << array[node.key].word << endl;
}