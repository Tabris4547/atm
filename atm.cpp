#include<iostream>
#include "atm.h"
using namespace std;


account::account()
{
    money=0;
}
void account::seeBalance()
{
     cout<<money<<endl;
}

void account::dePosit(int mon)
{
    money+=mon;
    cout<<money<<endl;
}

void account::withDraw(int mon)
{
    if(money<mon)
    {
            cout<<"No! you can't withDraw!"<<endl;
    }
    else
    {
        money-=mon;
    }
    cout<<money<<endl;
}


pin::pin(int num)
{
    pinNo=num;
    a=NULL;
    aNum=0;
}

bool pin::checkPin(int Pin)
{
    if(Pin==pinNo) return true;
    else return false;
}

void pin::makeAccount()
{
    int tmp;
    cout<<"How many accout you need?"<<endl;
    cin>>tmp;
    aNum=tmp;
    a=new account[tmp];
    
    for(int i=0;i<tmp;i++)
    {
        int put;
        cout<<"How much money you want to put in?"<<endl;
        cin>>put;
        a[i].dePosit(put);
    }
}
int pin::accountNumber()
{
    return aNum;
}

void pin::chooseAccount(int num)
{
    if(accountNumber()<num)
    {
        cout<<"Invaild num"<<endl;
    }
    else
    {
        int tmp;
        cout<<"What do you want??"<<endl<<"1)balance 2)deposit 3)withdraw"<<endl;
        cin>>tmp;

        switch(tmp)
        {
            case 1:
                a[num].seeBalance();
                break;
            case 2:
                cout<<"How much money to deposit?"<<endl;
                cin>>tmp;
                a[num].dePosit(tmp);
                break;

            case 3:
                cout<<"How much money to withdraw?"<<endl;
                cin>>tmp;
                a[num].withDraw(tmp);
                break;
            default:
                cout<<"You press wrong number. Plz try again"<<endl;
                break;
        }  
    }
}
account pin::showAcount(int num)
{
    return a[num];
}