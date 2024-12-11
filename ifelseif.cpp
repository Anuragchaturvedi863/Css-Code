#include <iostream>
using namespace std;
int main() {
string website;
string visit;
cout<<"enter your website";
cin>>website;
if(website=="makemytrip")
{
 cout<<"choose your destination international,domestic";
 cin>>visit;
 if(visit=="international")
 {
     cout<<"choose country japan or russia";
     cin>>visit;
     if(visit=="japan")
     {
         cout<<"1200rs";
     }
     else if(visit=="russia")
     {
         cout<<"300rs";
     }
     else
     {
         cout<<"invalid adress";
     }
 }
 else if(visit=="domestic")
 {
    cout<<"choose country pakistan or bangladedsh";
    cin>>visit;
     if(visit=="pakistan")
     {
         cout<<"100000rs";
     }
     else if(visit=="bangladesh")
     {
         cout<<"30rs";
     }
     else
     {
         cout<<"invalid adress";
     }
     
 }
 else
 {
    cout<<"invalid adress"; 
 }
}
else
{
    cout<<"invalid adress";
}


}