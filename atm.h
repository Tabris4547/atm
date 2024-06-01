#ifndef Atm_h
#define Atm_h

class account
{
    private:
        int money;
    public:
        account();
        void seeBalance();
        void dePosit(int mon);
        void withDraw(int mon);

};

class pin
{
    private:
        int pinNo;
        int aNum;
        account * a;

    public:
        pin(int num);
        bool checkPin(int Pin);
        void makeAccount();
        void chooseAccount(int num);
        int accountNumber();
        account showAcount(int num);
        

};
#endif