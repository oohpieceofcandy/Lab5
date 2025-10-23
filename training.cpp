#include <iostream>
#include <fstream>
#include <map>

using namespace std;

class training
{
private:
map<char, int> char_count;
map<string,int> kgrams;
    
public:
    training(string filename);
   map<char,int> get_char_count();
    map<string,int> get_kgrams();
};

training::training(string filename)
{
}


