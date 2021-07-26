//                    //                 //TIC-TAC-TOE GAME//                    //                 //

#include <iostream>
using namespace std;
int main()
{
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    int n,m,i,c;

                                     // Showing the game table //

    cout<<"Your Game Table is:"<<endl;
    cout<<"            "<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    cout<<"            "<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<endl;
    cout<<"            "<<" "<<arr[6]<<" "<<arr[7]<<" "<<arr[8]<<endl;
    cout<<"For inputing ur choice input the no present on this table..."<<endl;

                                    // Asking user's option //

    cout<<"Enter your choice: \n 1. PLAY \n 2. QUIT"<<endl;
    cin>>c;
    if(c==1){
    for(i=0;i<4;i++){

                                     // Giving player 1 chance to play //

    cout<<"Player 1 :"<<endl;
    cout<<"Enter the place\t:";
    cin>>n;
    switch(n){
    case 1: arr[0]='X';
     break;
    case 2: arr[1]='X';
     break;
    case 3: arr[2]='X';
     break;
    case 4: arr[3]='X';
     break;
    case 5: arr[4]='X';
     break;
    case 6: arr[5]='X';
     break;
    case 7: arr[6]='X';
     break;
    case 8: arr[7]='X';
     break;
    case 9: arr[8]='X';
     break;
    default: cout<<"Wrong Input!! Unfortunately Your Chance is Skipped";
    }
    cout<<"            "<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    cout<<"            "<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<endl;
    cout<<"            "<<" "<<arr[6]<<" "<<arr[7]<<" "<<arr[8]<<endl;

                                       // Conditions to check if player 2 won or not //

    if((arr[0]==arr[1]&&arr[1]==arr[2])||(arr[3]==arr[4]&&arr[4]==arr[5])||(arr[6]==arr[7]&&arr[7]==arr[8]))
        {

            cout<<"Congratulations!!! Player 1 WON";
            break;
        }
    if((arr[0]==arr[4]&&arr[4]==arr[8])||(arr[2]==arr[4]&&arr[4]==arr[6]))
        {
            cout<<"Congratulations!!! Player 1 WON";
            break;
        }
    if((arr[0]==arr[3]&&arr[3]==arr[6])||(arr[1]==arr[4]&&arr[4]==arr[7])||(arr[2]==arr[5]&&arr[5]==arr[8]))
        {
            cout<<"Congratulations!!! Player 1 WON";
            break;
        }

                                         // Giving player 2 chance to play //

    cout<<"Player 2 :"<<endl;
    cout<<"Enter the place\t:";
    cin>>m;
    switch(m){
    case 1: arr[0]='O';
     break;
    case 2: arr[1]='O';
     break;
    case 3: arr[2]='O';
     break;
    case 4: arr[3]='O';
     break;
    case 5: arr[4]='O';
     break;
    case 6: arr[5]='O';
     break;
    case 7: arr[6]='O';
     break;
    case 8: arr[7]='O';
     break;
    case 9: arr[8]='O';
     break;
    default: cout<<"Wrong Input!! Unfortunately Your Chance is Skipped";
    }
    cout<<"            "<<" "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    cout<<"            "<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<endl;
    cout<<"            "<<" "<<arr[6]<<" "<<arr[7]<<" "<<arr[8]<<endl;

                                      // Conditions to check if player 2 won or not //

    if((arr[0]==arr[1]&&arr[1]==arr[2])||(arr[3]==arr[4]&&arr[4]==arr[5])||(arr[6]==arr[7]&&arr[7]==arr[8]))
        {
            cout<<"Congratulations!!! Player 2 WON";
            break;
        }
    if((arr[0]==arr[4]&&arr[4]==arr[8])||(arr[2]==arr[4]&&arr[4]==arr[6]))
        {
            cout<<"Congratulations!!! Player 2 WON";
            break;
        }
    if((arr[0]==arr[3]&&arr[3]==arr[6])||(arr[1]==arr[4]&&arr[4]==arr[7])||(arr[2]==arr[5]&&arr[5]==arr[8]))
        {
            cout<<"Congratulations!!! Player 2 WON";
            break;
        }
    }
    }
    else
        return 0;
    if(i==4)
        cout<<"OHH!! Tie...";
            return 0;
}

