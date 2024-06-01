#include<iostream> 
#include "atm.h"
using namespace std;



void test();
void test2();


int main()
{

    test();
    test2();
    

}

void test()
{
    
    pin person=pin(50);
    cout<<"put your card"<<endl;
    if(person.checkPin(40))
    {
        cout<<"ok"<<endl;
    }
    else
    {
        cout<<"exit"<<endl;
    }

}
void test2()
{
    pin person=pin(50);
    cout<<"put your card"<<endl;
    person.makeAccount();
    if(person.checkPin(50))
    {
        cout<<"ok"<<endl;
        //check account
        person.chooseAccount(2);
        person.showAcount(2).seeBalance();
        person.showAcount(2).dePosit(300);
        person.showAcount(2).withDraw(500);
    }
    else
    {
        cout<<"exit"<<endl;
    }
}