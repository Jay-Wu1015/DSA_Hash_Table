#include"HashTable.h"
#include<string>
#include<iostream>
#include<list>
#include<vector>



HashTable::HashTable(long long unsigned int size)
    :table{size}{

}

size_t HashTable::Hash(const string&key){
    size_t hash=0;

    for(char c: key){
        hash=((hash*50)+c);
    }
    return hash;

}


void HashTable::set(const string& key, int value){
    
    size_t address=Hash(key)%table.size();
    table[address].push_back(make_pair(key,value));
    
    //cout<<"table:["<<table[address]<<"]"<<endl;

}

int HashTable::get(const string& key){
    size_t address=Hash(key)%table.size();
    for (const auto& pair : table[address]) {
        if(pair.first==key)
            return pair.second;
    }

    return 0;
}

void  HashTable::printTable() const {
        for (size_t i = 0; i < table.size(); ++i) {
            std::cout << "Index " << i << ": ";
            for (const auto& pair : table[i]) {
                std::cout << "[" << pair.first << ": " << pair.second << "] ";
            }
            std::cout << std::endl;
        }
}