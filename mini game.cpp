///prime number thingy
///if you enter in something thats not a number it will say its a prime number sooo big L on my side
#include<iostream>
#include <unistd.h>
using namespace std;

int n;

bool prime(int n){
    bool tof = false;
    if(n!=1){
        for(int i = 2; i<n && tof != true; i++){
            if(n%i==0){
                tof = true;
            }
        }
        if(tof==false){
            cout<<"Mhm... that looks like a prime number to me..."<<endl;
            return true;
        }else{
            cout<<"Thats not a prime number stupid..."<<endl;
            return false;
        }
    }
    else{
        return false;
        cout<<"Acctually no, 1 is not a prime number."<<endl;
    }
}


int main(){
cout<<"Enter in a prime number! You have 3 tries."<<endl;

for(int j = 0; j<3; j++){
cin>>n;
if(prime(n); = true){
    cout<<"you win ig";
    usleep(1000)
    return 0;
}else{
    cout<<"try again bro"<<endl;
}
}

cout<<"skill issue bro";
usleep(10000000);
cout<<endl<<endl<<endl;

    return 0;
}
///shitty code lol
