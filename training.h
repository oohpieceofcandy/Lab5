#ifndef Training_H
#define Training_H

 class training
{
private:
    map<char, int> char_count;
    map<string, int> kgrams;

public:
    training(string filename, int k);
    map<char, int> get_char_count();
    map<string, int> get_kgrams();
};

#endif 