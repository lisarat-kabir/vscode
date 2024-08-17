#include<iostream>
using namespace std;

int plusFuncInt(int x,int y){
    return x+y;
}

double plusFuncDouble(double x, double y){
    return x+y;
}

int main(){
    int z = plusFuncInt(5,8);
    double s= plusFuncDouble(6.8,7.3);

    cout<<"Int: "<<z<< "\n";
    cout<<"Double: "<<s;
    return 0;
}