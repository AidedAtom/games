#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
/// ♣ - clubs
/// ♠ - spades
/// ♦ - diamonds
/// ♥ - hearts
int cards[10000];
bool test = 0;


int main(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
srand(time(0));
cout<<"current commands: draw/roll"<<endl<<endl;
for(int i = 0; i<1000; i++){
string command;
cout<<endl<<endl;
cout<<"Enter command: "; cin>>command;
if(command == "roll" || "draw"){
int num;
cin>>num;
for(int i = 0; i<num; i++){
    cards[i]=rand()%52+1;
    int b = rand()%2000000000+1;
    if(b==42){
        SetConsoleTextAttribute(hConsole, 11);
        cout<<"THE CARD OF GOD"<<endl;
        SetConsoleTextAttribute(hConsole, 12);
        cout<<"RNGESUS INCARNATE CARD ";
        SetConsoleTextAttribute(hConsole, 11);
        cout<<"LIKE HOLEEYYY FSIHTHI"<<endl;
        cout<<"like lil bro if u acctually get this i swear this shit is fucjking sdhaj dhilsadhasdhlkahsd"<<endl;
        cout<<"like deadass if my code is working properly your dumbass just got a 1/2b card smh"<<endl;
        break;
    }
            if(cards[i]==52){
                test = 1;
                int x = rand()%2147000000+1;
                if(x==42){
                    SetConsoleTextAttribute(hConsole, 11);
                    cout<<endl<<endl<<"THE CARD OF 100% BOB";
                    cout<<endl<<"honestly bro? i give up... i cant deal with this shit there is NO WAY you just got a 1/111 644 000 000 drop bro"<<endl<<endl;
                    SetConsoleTextAttribute(hConsole, 12);
                    cout<<"LIKE WHAT IN THE FUCK"<<endl;
                }
                cards[i] = rand()%52+1;
                    switch(cards[i]%13){
                        case 0:cout<<"2 "; break;
                        case 1:cout<<"3 "; break;
                        case 2:cout<<"4 "; break;
                        case 3:cout<<"5 "; break;
                        case 4:cout<<"6 "; break;
                        case 5:cout<<"7 "; break;
                        case 6:cout<<"8 "; break;
                        case 7:cout<<"9 "; break;
                        case 8:cout<<"10 "; break;
                        case 9:
                            SetConsoleTextAttribute(hConsole, 10);
                            cout<<"Jack ";
                            SetConsoleTextAttribute(hConsole, 15);
                            break;
                        case 10:
                            SetConsoleTextAttribute(hConsole, 13);
                            cout<<"Queen ";
                            SetConsoleTextAttribute(hConsole, 15);
                            break;
                        case 11:
                            SetConsoleTextAttribute(hConsole, 14);
                            cout<<"King ";
                            SetConsoleTextAttribute(hConsole, 15);
                            break;
                        case 12:
                            SetConsoleTextAttribute(hConsole, 176);
                            cout<<"Ace";
                            SetConsoleTextAttribute(hConsole, 15);
                            cout<<" ";
                            break;
                }
                SetConsoleTextAttribute(hConsole, 11);
                cout<<"of rarity"<<endl;
                SetConsoleTextAttribute(hConsole, 15);
            }
    if(test == 0){
    switch(cards[i]%13){
        case 0:cout<<"2 "; break;
        case 1:cout<<"3 "; break;
        case 2:cout<<"4 "; break;
        case 3:cout<<"5 "; break;
        case 4:cout<<"6 "; break;
        case 5:cout<<"7 "; break;
        case 6:cout<<"8 "; break;
        case 7:cout<<"9 "; break;
        case 8:cout<<"10 "; break;
        case 9:
            SetConsoleTextAttribute(hConsole, 10);
            cout<<"Jack ";
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 10:
            SetConsoleTextAttribute(hConsole, 13);
            cout<<"Queen ";
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 11:
            SetConsoleTextAttribute(hConsole, 14);
            cout<<"King ";
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 12:
            SetConsoleTextAttribute(hConsole, 176);
            cout<<"Ace";
            SetConsoleTextAttribute(hConsole, 15);
            cout<<" ";
            break;
    }
    switch(cards[i]/13){
        case 0:
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"of clubs"<<endl;
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 1:
            SetConsoleTextAttribute(hConsole, 8);
            cout<<"of spades"<<endl;
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 2:
            SetConsoleTextAttribute(hConsole, 12);
            cout<<"of diamonds"<<endl;
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 3:
            SetConsoleTextAttribute(hConsole, 12);
            cout<<"of hearts"<<endl;
            SetConsoleTextAttribute(hConsole, 15);
            break;
        case 4:
            SetConsoleTextAttribute(hConsole, 12);
            cout<<"of hearts"<<endl;
            SetConsoleTextAttribute(hConsole, 15);
            break;
        default:cout<<"  ERROR(i have no idea wtf is going on)  "; break;
    }
    }
    test = 0;
}
}
}

Sleep(100000000);
    return 0;
}
