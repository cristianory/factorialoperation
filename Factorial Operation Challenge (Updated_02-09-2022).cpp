#include <iostream>
using namespace std;

int main(){
    unsigned int user, i, result;
    result = 1;
    
    
    cout<<"FACTORIAL OPERATION PROGRAM"<<endl;
    cout<<"==========================="<<endl;cout<<endl;
    cout<<"Click ENTER to start";cin.get();
    
    cout<<endl;cout<<"Input value : ";cin>>user;
    cout<<endl;cout<<"Result :"<<endl;
	
	if(user==0 || user==1){
		cout<<user<<"!";
	}
	else if(user>1){
		cout<<user<<"! = ";
	}
    
    for(int i = user; i>0; i--){
        if(i>1){
            cout<<i<<" x ";
        }
        else if(i==1 && user>1){
			cout<<i;
        }
    }
    
    for(int i = user; i>0; i--){
        result = result*i;
    }
    cout<<" = "<<result;
    
    return 0;
}

//Factorial Operation (Updated version - 01/09/2022)
//Code by cristianory 
