#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "training.h"

using namespace std;

class training
{
private:
map<char, int> char_count;
map<string,int> kgrams;
    
public:
    training(string filename,int k);
   map<char,int> get_char_count();
    map<string,int> get_kgrams();
};

training::training(string filename,int k)
{
    string line; 
    ifstream file(filename);
     
    while (getline(file,line)){
        for (char c: line){
            if (training::char_count.count(c))
            {
                training::char_count[c] ++;
            }
            else
            {
                training::char_count[c] == 1;
            }
            

        }
        for (int i; (i<line.size() and i+k <line.size()); i++){
           string kgram = line.substr(i,k);
           if (training::kgrams.count(kgram))
           {
               training::kgrams[kgram]++;
           }
           else
           {
               training::kgrams[kgram] = 1;
           }
           
        }
    }
}


