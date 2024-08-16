#include<iostream>
#include<string>
using namespace std;

int main(){
    string food="Pizza";
    string* ptr=&food;
    //Output the value of food' 
    cout<<food<<"\n";

    //Output the memory address of food
    cout<<&food<<"\n";

    //Output the memory address of food with pointer
    cout<<ptr; 
     return 0;
}