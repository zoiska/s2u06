#ifndef $MAP_H
#define $MAP_H

#include <iostream>
#include <map>
#include <string>

class word_count{
private:
    std::map<std::string, int> wordmap;
public:
    word_count(std::string input);
    void print();
};

#endif //$MAP_H
