#include<iostream>
using namespace std;

class Human
{
    private:
    int bankBalance;

    public:
    string name;
    Human()
    {
        bankBalance=1000;
    }
    Human(int num)
    {
        bankBalance=num;
    }
    
    void setBankBalance(int num)
    {
        bankBalance=num;
    }
    int getBankBalance()
    {
        return bankBalance;
    }
};

int main()
{
    Human human1,human2;
    // cout<<human1.getBankBalance();
    human1.name = "Nisha";
    human1.setBankBalance(54000);
    human2.name = "tiya";
    human2.setBankBalance(67000);

    cout<<human1.name<<": "<<human1.getBankBalance()<<endl;
    cout<<human2.name<<": "<<human2.getBankBalance();

}