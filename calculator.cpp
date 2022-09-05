#include<iostream>
using namespace std;
int main(){
    int num1,num2,ch,num3;
    cout<<"calculator\n";
    cout<<"1.Adding\n";
    cout<<"2.subtraction\n";
    cout<<"3.Multiplecation\n";
    cout<<"4.division\n";
    cout<<"Enter Choice(1-4):";
    cin>>ch;
    cout<<"enter 1st num:";
    cin>>num1;
    cout<<"enter 2nd num:";
    cin>>num2;
    if(ch==1){
        num3=num1+num2;
        cout<<"sum = "<<num3;
    }
    else if(ch==2){
        num3=num1-num2;
        cout<<"sbtract = "<<num3;
    }
    else if(ch=3){
        num3=num1*num2;
        cout<<"multiplecation = "<<num3;
    }
    else if(ch=4){
        num3=num1/num2;
        cout<<"divide = "<<num3;
    }

}
