#include<iostream>
using namespace std;
enum Level {
    LOW =1,
    MEDIUM,
    HIGH
};
int main(){
 enum Level position = MEDIUM;
    switch (position) {
        case 1:
        cout<<"My level Low";
        break;
        case 2 :
        cout<<"My level Medium";
        break;
        case 3:
        cout<<"My level High"; 
        break;

    }
    return 0;
}