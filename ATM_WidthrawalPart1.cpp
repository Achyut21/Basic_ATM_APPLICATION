#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    string passwd="1234",passwd2;
    string des="*****************";
    string line="\t___________________________________________________________\n";
    string options ="\n"+line+"\n\t ==> Enter 1 to widthdraw\n\t ==> Enter 2 to change password\n\t ==> Enter 3 to exit the atm machine\n\t  -> Enter your choice: ";
    double balance=10000,widthAmt=0;
    bool exit=false;
    cout<<"\t"<<des<<" Welcome to ATM "<<des;
    
    while(exit!=true){
        cout<<options;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<line<<"\n\t\t -> current balance = "<<balance;
            cout<<"\n\t\t -> Enter the amount for widthrawl: ";
            cin>>widthAmt;
            if(widthAmt<balance){
                balance -= widthAmt;
                cout<<"\t\t -> Remaing balance: "<<balance;
            }else{cout<<"\t\t -> Entered amount exceeds the current balance.";}
            break;
        case 2:
            cout<<line<<"\t\t -> Enter your old password: ";
            cin>>passwd2;
            if(passwd==passwd2){
            cout<<"\n\t\t -> Enter your new password: ";
            cin>>passwd;cout<<"\t\t -> Password changed susccessfully!"; }else cout<<"\t\t -> The enterd password is incorrect";
             break;
        
        case 3:
            cout<<line<<"\t\texited the atm.\n"<<line;
            exit=true;
                break;
        default:
            cout<<"\t\tPlease enter a valid choice";
            break;
        }
    }
    
    return 0;
}