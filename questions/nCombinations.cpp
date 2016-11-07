/**
 *
Created by Alvaro on 11/7/16.

* a encoded to 1
* b encoded to 2
* ....
* z encoded to 26
*
* '123' can be translated to 'abc','aw','lc' -> 3
* '12' -> 'ab','l' -> 2
*
* Write a function to get the number of valid combinations from a number like '123123123'
*/

#include <iostream>
#include <string>

#include "../hashmap.cpp"

using namespace std;

//int main(){
////    string[] alphabet = new string[26];
//    return 0;
//}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " NAME" << std::endl;
        return 1;
    }
    string alphabet[] = {"","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    for(int i=0;i<strlen(argv[1]);i++){

        if(argv[1][i]=='0'){
            cerr << "there is a zero" << endl;
            return -1;
        }
        for(int j=i;j<strlen(argv[1]);j++) {
            char subs[j+1-i];
            int k=0;
            for(;k<j+1-i;k++) {
                subs[k]=argv[1][i+k];
            }
            subs[k]='\0';
            cout << subs << endl;
        }
    }
    return 0;
}