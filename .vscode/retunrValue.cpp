#include<iostream>
using namespace std;

int myFunction(int x, int y){
    return x+y;
}
int main(){ 
    int x;
    int y;
    cout<<"x:\n";
    cin>>x;
    cout<<"y:";
    cin>>y;
    cout<<myFunction(x,y);
    return 0;
}