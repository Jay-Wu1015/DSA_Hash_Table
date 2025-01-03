#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_
#include<string>
#include<vector>
#include<iostream>
#include<list>
using namespace std;

class HashTable{
    //friend ostream &operator<<(ostream &os, const HashTable &TableArr);
protected:
long long unsigned int size;
vector <list<pair<string, int>>> table;
int a;

public:


HashTable(long long unsigned int size);

size_t Hash(const string&key);

void set(const string& key, int value);
int get(const string& key);

void printTable()const;

};



#endif