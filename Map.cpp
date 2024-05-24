//
// Created by zoisk on 24.05.2024.
//
#include "Map.h"

word_count::word_count(std::string input) {
    const char *c = input.c_str();
    std::string wort = "";
    while(*c != '\0') {
        if(*c == ' ' || *c == '\n' || *c == ',' || *c == '.') {
            wordmap[wort]++;
            wort = "";
        }
        else {
            wort = wort + *c;
        }
        c++;
    }
}

void word_count::print() {
    for(auto i : wordmap) {
        std::cout << i.first << " : " << i.second;
    }
}