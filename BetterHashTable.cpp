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
HashNode *add_value(string word, HashNode *array){  //nothing is being returned anymore so I can probably just use void
    HashNode new_node;
    //HashNode current;
    int value;  //this is the key for the word in the table

    value = find_value(word);   //gets the key from here

    if (value > 50){    //if the key is larger than the array then make it fit by using the % sign
        value = value % 50;
        cout << "The value of the string is: " << value << endl;
    }
    new_node.key = value;   //these things add the information to the HashNode
    new_node.word = word;

    if (array[value].key != -1){    //checks to see if the key is -1 since that's its default in the HashNode.h file
        array[value].next = &new_node;  //makes the new_node the next one after the one already there
    }
    else{
        array[value] = new_node;
    }

    return array;
}

void display(HashNode *array, int value){
    cout << "Word at array " << value << " is " << array[value].word << endl;
}


int main(){
    HashNode new_node;
    HashNode array[50];
    HashNode *arrayptr = array;

    //add_value("ZXZ", arrayptr);
    //array[new_node.key] = new_node;
    //display(arrayptr, 26);

    add_value("dad", arrayptr);
    //array[new_node.key] = new_node;
    display(arrayptr, 9);

    add_value("add", arrayptr);
    //array[new_node.key] = new_node;
    display(arrayptr, 9);


}