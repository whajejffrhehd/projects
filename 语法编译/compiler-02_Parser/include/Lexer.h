
#ifndef COMPILER_LEXER_H
#define COMPILER_LEXER_H

#include <bits/stdc++.h>
#include "TYPE.h"
using namespace std;

struct Word {
    enum TOKEN_CATEGORY category;
    string raw;
    int line;
};

class Lexer {
private:
    FILE *in, *out;
    int line;

    void initKeyWord();

    bool isSingle(char c);


public:
    Lexer(const char *FILE_IN, const char *FILE_OUT);

    virtual ~Lexer();

    void program();

    int getNext(Word &w);


};

extern vector<Word> words;

extern map<string, TOKEN_CATEGORY> keyWord;

#endif 
