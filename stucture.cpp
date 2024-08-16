#include<iostream>
using namespace std;
int main(){
    struct  
    {
        int age;
        string myName;
    } myStructure1,myStructure2,myStructure3;
    // Asign values to member in myStructure
    myStructure1.age=23;
    myStructure1.myName="LIsarat Kabir";

    myStructure2.age=26;
    myStructure2.myName="Lutful Kabir";

    myStructure3.age=27;
    myStructure3.myName="Aryan Kabir";

    //Print members of myStucture
    cout<<myStructure1.age<< " "<<myStructure1.myName <<"\n";
    cout<<myStructure2.age<< " "<<myStructure2.myName <<"\n";
    cout<<myStructure3.age<< " "<<myStructure3.myName;
    

    return 0;
    
}