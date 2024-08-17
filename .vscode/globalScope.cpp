#include<iostream>
using namespace std;
//Global variable is x
int x=5;
void myFunction(){
//We can use x here
cout<<x<<"\n";
}
int main(){
    myFunction();

    cout<<x<<"\n";
    return 0;
}