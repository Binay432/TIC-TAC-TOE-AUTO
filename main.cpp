// TIC-TAC-TOE GAMING
//DEVELOPED BY BINAY SAH.....
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//CLEARING SCREEN
#include<cstdlib>//FOR RANDOM NUMBER GENERATION
#include<ctime>//TO SUPPORT SRANDOM
using namespace std;
static char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

      int defend()
                   {
                                                            //TOP ROW(for X)
                                                            if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='3'){return 3;}
                                                            else if(a[0][0]=='X' && a[0][1]=='2' && a[0][2]=='X'){return 2;}
                                                            else if(a[0][0]=='1' && a[0][1]=='X' && a[0][2]=='X'){return 1;}
                                                                //MID ROW
                                                            else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='6'){return 6;}
                                                             else if(a[1][0]=='X' && a[1][1]=='5' && a[1][2]=='X'){return 5;}
                                                            else if(a[1][0]=='4' && a[1][1]=='X' && a[1][2]=='X'){return 4;}
                                                                 //BOTTOM ROW
                                                            else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='9'){return 9;}
                                                            else if(a[2][0]=='X' && a[2][1]=='8' && a[2][2]=='X'){return 8;}
                                                            else if(a[2][0]=='7' && a[2][1]=='X' && a[2][2]=='X'){return 7;}
                                                                  //LEFT COLOUMN
                                                            else if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='7'){return 7;}
                                                            else if(a[0][0]=='X' && a[1][0]=='4' && a[2][0]=='X'){return 4;}
                                                            else if(a[0][0]=='1' && a[1][0]=='X' && a[2][0]=='X'){return 1;}
                                                                //MID COLOUMN
                                                            else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='8'){return 8;}
                                                            else if(a[0][1]=='X' && a[1][1]=='5' && a[2][1]=='X'){return 5;}
                                                            else if(a[0][1]=='2' && a[1][1]=='X' && a[2][1]=='X'){return 2;}
                                                                  //RIGHT COLOUMN
                                                            else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='9'){return 9;}
                                                            else if(a[0][2]=='X' && a[1][2]=='6' && a[2][2]=='X'){return 6;}
                                                            else if(a[0][2]=='3' && a[1][2]=='X' && a[2][2]=='X'){return 3;}
                                                                //CROSS L-R
                                                            else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='9'){return 9;}
                                                            else if(a[0][0]=='X' && a[1][1]=='5' && a[2][2]=='X'){return 5;}
                                                            else if(a[0][0]=='1' && a[1][1]=='X' && a[2][2]=='X'){return 1;}
                                                                //CROSS R-L
                                                            else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='7'){return 7;}
                                                            else if(a[0][2]=='X' && a[1][1]=='5' && a[2][0]=='X'){return 5;}
                                                            else if(a[0][2]=='3' && a[1][1]=='X' && a[2][0]=='X'){return 3;}
                                                            else {return 0;}
                    }
    int self_fill()
    {
                                                            //TOP ROW(for X)
                                                            if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='3'){return 3;}
                                                            else if(a[0][0]=='O' && a[0][1]=='2' && a[0][2]=='O'){return 2;}
                                                            else if(a[0][0]=='1' && a[0][1]=='O' && a[0][2]=='O'){return 1;}
                                                                //MID ROW
                                                            else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='6'){return 6;}
                                                             else if(a[1][0]=='O' && a[1][1]=='5' && a[1][2]=='O'){return 5;}
                                                            else if(a[1][0]=='4' && a[1][1]=='O' && a[1][2]=='O'){return 4;}
                                                                 //BOTTOM ROW
                                                            else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='9'){return 9;}
                                                            else if(a[2][0]=='O' && a[2][1]=='8' && a[2][2]=='O'){return 8;}
                                                            else if(a[2][0]=='7' && a[2][1]=='O' && a[2][2]=='O'){return 7;}
                                                                  //LEFT COLOUMN
                                                            else if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='7'){return 7;}
                                                            else if(a[0][0]=='O' && a[1][0]=='4' && a[2][0]=='O'){return 4;}
                                                            else if(a[0][0]=='1' && a[1][0]=='O' && a[2][0]=='O'){return 1;}
                                                                //MID COLOUMN
                                                            else if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='8'){return 8;}
                                                            else if(a[0][1]=='O' && a[1][1]=='5' && a[2][1]=='O'){return 5;}
                                                            else if(a[0][1]=='2' && a[1][1]=='O' && a[2][1]=='O'){return 2;}
                                                                  //RIGHT COLOUMN
                                                            else if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='9'){return 9;}
                                                            else if(a[0][2]=='O' && a[1][2]=='6' && a[2][2]=='O'){return 6;}
                                                            else if(a[0][2]=='3' && a[1][2]=='O' && a[2][2]=='O'){return 3;}
                                                                //CROSS L-R
                                                            else if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='9'){return 9;}
                                                            else if(a[0][0]=='O' && a[1][1]=='5' && a[2][2]=='O'){return 5;}
                                                            else if(a[0][0]=='1' && a[1][1]=='O' && a[2][2]=='O'){return 1;}
                                                                 //CROSS R-L
                                                            else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='7'){return 7;}
                                                            else if(a[0][2]=='O' && a[1][1]=='5' && a[2][0]=='O'){return 5;}
                                                            else if(a[0][2]=='3' && a[1][1]=='O' && a[2][0]=='O'){return 3;}
                                                            else{return 0;}
                    }

void tic_board()
{
cout<<"\t\t\t\t\t     |     |     "<<endl;
cout<<"\t\t\t\t\t  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  "<<endl;
cout<<"\t\t\t\t\t_____|_____|_____"<<endl;
cout<<"\t\t\t\t\t     |     |     "<<endl;
cout<<"\t\t\t\t\t  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  "<<endl;
cout<<"\t\t\t\t\t_____|_____|_____"<<endl;
cout<<"\t\t\t\t\t     |     |     "<<endl;
cout<<"\t\t\t\t\t  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  "<<endl;
cout<<"\t\t\t\t\t     |     |     "<<endl;
}
int main()
{char read='0';
int replay_check=0;
char PLAYER_1[10],PLAYER_2[10]="COMPUTER";
do{   cout<<"\t\t\t WELCOME TO AUTO TIC-TAC-TOE, DESIGN BY BINAY SAH"<<endl;
        cout<<"ENTER YOUR NAME: ";cin>>PLAYER_1;
int check[9]={0,0,0,0,0,0,0,0,0};
int x=0;
int choice;
for(int i=0;i<=8;i++)
{if(i%2==0)
{system("cls");
 cout<<"\t\t\t\t\t\t WELCOME ON TIC-TAC-TOE( by Binay) ";
cout<<endl<<PLAYER_1<<"-[X]"<<endl<<PLAYER_2<<"-[0]";
cout<<endl<<endl;
tic_board();
cout<<endl<<endl<<endl;
cout<<"\t\t "<<PLAYER_1<<"-[X]=";
 do{
    cin>>choice;
    for(int k=0;k<9;k++)
    {
        if(choice==check[k])
            {cout<<"......THE TABLE IS ALREADY SELECTED, please SELECT OTHER VALUE.....";
        break;}
        }
    }while(choice==check[0]||choice==check[1]||choice==check[2]||choice==check[3]||choice==check[4]||choice==check[5]||choice==check[6]||choice==check[7]||choice==check[8]);
x=choice;//for selecting the choice to let user aware about selected block

switch(choice)
{case 1:
    a[0][0]='X';
    break;
case 2:
    a[0][1]='X';
    break;
case 3:
    a[0][2]='X';
    break;
case 4:
    a[1][0]='X';
break;
case 5:
    a[1][1]='X';
    break;
case 6:
    a[1][2]='X';
    break;
case 7:
    a[2][0]='X';
    break;
case 8:
    a[2][1]='X';
    break;
case 9:
    a[2][2]='X';
    break;
default:
    cout<<".....INVALID INPUT......";
    break;}
} if(i%2!=0)
{
   system("cls");
 cout<<"\t\t\t\t\t\t WELCOME ON TIC-TAC-TOE( by Binay) ";
cout<<endl<<PLAYER_1<<"-[X]"<<endl<<PLAYER_2<<"-[0]";
cout<<endl<<endl;
tic_board();
cout<<endl<<endl<<endl;
cout<<"\t\t "<<PLAYER_2<<"-[O]=";
srand(time(0));
do{
    int defend_check=0,self_check=0;
    defend_check=defend();
    self_check=self_fill();
      if(defend_check!=0 && self_check==0)
      {
          choice=defend_check;
      }
      else if(defend_check==0&& self_check!=0)
      {
          choice=self_check;

      }
      else if (defend_check!=0 && self_check!=0)
      {
          choice=self_check;
      }
      else
      {
        choice=1+(rand()%9);

      }
    }while(choice==check[0]||choice==check[1]||choice==check[2]||choice==check[3]||choice==check[4]||choice==check[5]||choice==check[6]||choice==check[7]||choice==check[8]);
x=choice;
switch(choice)
{case 1:
    a[0][0]='O';
    break;
case 2:
    a[0][1]='O';
    break;
case 3:
    a[0][2]='O';
    break;
case 4:
    a[1][0]='O';
break;
case 5:
    a[1][1]='O';
    break;
case 6:
    a[1][2]='O';
    break;
case 7:
    a[2][0]='O';
    break;
case 8:
    a[2][1]='O';
    break;
case 9:
    a[2][2]='O';
    break;
default:
    cout<<".....INVALID INPUT......";
    break;}
}
check[i]=x;
x=0;
                                                           //TOP ROW
                                                            if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
                                                                 { tic_board();replay_check++;cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE W0N......";break;}
                                                        else if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
                                                                 { tic_board();replay_check++;cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                             //MID ROW
                                                             else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
                                                                 {tic_board();replay_check++; cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
                                                                 {tic_board();replay_check++; cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                             //BOTTOM ROW
                                                             else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
                                                                 {tic_board();replay_check++; cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
                                                                 {tic_board();replay_check++; cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                              //LEFT COLOUMN
                                                              else if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
                                                                 {tic_board();replay_check++; cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
                                                                 { tic_board();replay_check++;cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                               //MID COLOUMN
                                                               else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
                                                                 {tic_board();replay_check++; cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')
                                                                 {tic_board();replay_check++; cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                                 //RIGHT COLOUMN
                                                                 else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
                                                                 { tic_board();replay_check++;cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')
                                                                 { tic_board();replay_check++;cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                                 //CROSS L TO R
                                                                 else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
                                                                 {tic_board();replay_check++; cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
                                                                 { tic_board();replay_check++;cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}
                                                                 //CROSS R TO L
                                                                 else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
                                                                 { tic_board();replay_check++;cout<<".....CONGRATULATION "<<PLAYER_1<<",YOU HAVE WON......";break;}
                                                        else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
                                                                 {tic_board();replay_check++; cout<<".....SORRY BUT "<<PLAYER_2<<" WON......";break;}




}if(replay_check==1){
cout<<endl<<"\t\t\t.......PRESS 'Y' to play again.........OR PRESS ANY OTHER KEY TO EXIT......";
cin>>read;}
if(replay_check==0){
tic_board();
cout<<endl<<"\t\t\t\t.....WELL PLAYED !"<<PLAYER_1 <<" BUT NO ONE WIN,BETTER NEXT TIME.........";
cout<<endl<<"\t\t\t\t........GAME TERMINATED......."<<endl<<endl;
cout<<"\t\t\t.......PRESS 'Y' to play again..........OR PRESS ANY OTHER KEY TO EXIT......";
cin>>read;}
if(read=='y'||'Y')
{ a[0][0]='1';a[0][1]='2';a[0][2]='3';a[1][0]='4';a[1][1]='5';a[1][2]='6';a[2][0]='7';a[2][1]='8';a[2][2]='9';
   system("cls");}
}while (read=='Y'||read=='y');
return 0;}
