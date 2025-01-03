#include<iostream>
#include"HashTable.h"

using namespace std;

int main(){

    HashTable Tab(50);
    Tab.set("apple",40);
    Tab.printTable();
    cout<<"Tab.get:"<<Tab.get("apple")<<endl;
    return 0;
}