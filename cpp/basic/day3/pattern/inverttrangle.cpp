#include <iostream>
using namespace std;

int main(){
    int i,j;
    int n=5;
    for(i=n;i>0;--i){
        for(j=1;j<n-1;j++){
            cout<<"*";
        }
    }
}