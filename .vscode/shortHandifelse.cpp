#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    int y;
    cout<<"First:";
    cin>>x;
        cout<<"Second:";
    cin>>y;
    string result=(x>=y)?"True":"False";
    cout<<result;
    return 0;
}