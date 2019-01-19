#include <iostream>
#include <string>

using namespace std;
int main() {
    string previous = "";
    int numWords = 0;
    string current;

    while(cin>>current){
        ++numWords;
        if(previous == current)
            cout<<"Repeated Word found: "<< current<<" at number "<<numWords<<endl;
        previous = current;

    }


    return 0; 
}