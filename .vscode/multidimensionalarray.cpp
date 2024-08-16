#include<iostream>
using namespace std;
int main(){
    bool ships[4][4]={
        {0,1,1,0},
        {0,0,0,0},
        {0,0,1,0},
        {0,0,1,0}
    };
    
int hits=0;
int numberOfTurns=0;

    //Allow the player to keep going until they have hit all four shios
    while (hits <4){
        int row, column;

        cout<<"Selecting coordinates\n";
        //Ask the player for a row
        cout<<"CHose a row number between 0 and 3:";
        cin>>row;
                //Ask the player for a column
        cout<<"CHose a column number between 0 and 3:";
        cin>>column;
        // Check if a ship exista in those coordinates
        if(ships[row][column]){
            //If the player hit a ship,remove it by setting the value to zero.
            ships[row][column]=0;
            //Increase the hit counter
            hits++;

            //Tell the player that they have hit a ship and how many ships are left
            cout<<"Hits "<< (4-hits) <<" lefts.\n\n";

        }
        else {
            //Tell the player that they missed
            cout<<"Miss\n\n";
        }
        //Count how many turns the player has taken 
        numberOfTurns++;
    }
    cout<<"Victory!\n";
    cout<<"You won in "<<numberOfTurns<<" turns";
    return 0;
}