#include <iostream>
using namespace std;

int main(){
    const int FIVE_HUNDRED=500;
    const int TWO_HUNDRED=200;
    const int ONE_HUNDRED=100;
    const int FIFTY=50;
    const int TWENTY=20;
    const int TEN=10;

int money,pay;

cout<<"Enter the amount of money:";
cin>>money;

pay = money/FIVE_HUNDRED;
cout<<"\nThe number of five hundred bills:"<<pay;
money = money%FIVE_HUNDRED;

pay = money/TWO_HUNDRED;
cout<<"\nThe number of two hundred bills:"<<pay;
money = money%TWO_HUNDRED;

pay = money/ONE_HUNDRED;
cout<<"\nThe number of one hundred bills:"<<pay;
money = money%ONE_HUNDRED;

pay = money/FIFTY;
cout<<"\nThe number of fifty bills:"<<pay;
money = money%FIFTY;

pay = money/TWENTY;
cout<<"\nThe numbeer of twenty bills:"<<pay;
money = money%TWENTY;

pay = money/TEN;
cout<<"\nThe number of ten :"<<pay;

money = money%TEN;
cout<<endl<<"Money left:"<<money;
return 0;
}