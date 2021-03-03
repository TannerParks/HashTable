#include <iostream>

using namespace std;

struct HashNode{
    int key;
    string word;
    HashNode *next;

    HashNode(){word = " "; key = -1; next = nullptr;}
};