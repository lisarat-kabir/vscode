#include<iostream>
using namespace std;
int main(){
    int x,y,result;
    cout <<"First Numbe:";
    cin>>x;
    cout <<"Second Numbe:";
    cin>>y;
    x&=y;
    result=x;
    cout<<"result:"<<result;

    
    
    return 0;
}