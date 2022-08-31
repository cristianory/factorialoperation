#include <iostream>
using namespace std;

int main(){
    int user, i, result;
    result = 1;
    
    cout<<"Input nilai : ";cin>>user;
    cout<<user<<"! = ";
    
    for(int i = user; i>0; i--){
        if(i>1){
            cout<<i<<" x ";
        }
        else if(i=1){
            cout<<i;
        }
    }
    
    for(int i = user; i>0; i--){
        result = result*i;
    }
    cout<<" = "<<result;
    
    return 0;
}

//Code by cristianory
