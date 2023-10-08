#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void playermove(int x, int y);
void gotoxy(int x, int y);
void printenemy();
void printplayer();
void moveplayerleft();
void moveplayerright();
void eraseenemy();
void eraseplayer();
void moveenemy();
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

int eX = 4 , eY = 2;
int pX = 75 , pY = 37;
main(){
system ("cls");
printmaze();
printenemy();
printplayer();
while(true)
{
    if(GetAsyncKeyState(VK_LEFT)){
     moveplayerleft();
    }
    if(GetAsyncKeyState(VK_RIGHT)){
     moveplayerright();
    }
    moveenemy();
     Sleep(200);
}

}
void moveplayerleft(){
    if(getCharAtxy(pX - 1, pY) == ' '){
 eraseplayer();
 pX = pX - 1 ;
 printplayer();
    }
}
void moveplayerright(){
    if(getCharAtxy(pX + 12, pY) == ' '){
 eraseplayer();
 pX = pX + 1 ;
 printplayer();
    }
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze(){
cout << " ###################################################################################################################################################################\n";                            
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n"; 
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " #                                                                                                                                                                 #\n";
cout << " ###################################################################################################################################################################\n";

}
void printenemy(){
    gotoxy(eX,eY);
    cout << "||||||||||";
    gotoxy(eX,eY+1);
    cout << "||||||||||";
    gotoxy(eX,eY+2);
    cout << "||||||||||";
    gotoxy(eX,eY+3);
    cout << "||||||||||";
    gotoxy(eX,eY+4);
    cout << "||||||||||";
}

void eraseenemy(){
    gotoxy(eX,eY);
    cout << "          ";
    gotoxy(eX,eY+1);
    cout << "          ";
    gotoxy(eX,eY+2);
    cout << "          ";
    gotoxy(eX,eY+3);
    cout << "          ";
    gotoxy(eX,eY+4);
    cout << "          ";
}
void moveenemy(){
    eraseenemy();
    eY = eY + 1;
    if(eY == 30)
    {
        eY = 2;
    }
    printenemy();
}
void printplayer(){
    gotoxy(pX,pY);
    cout << "    |##|    ";
    gotoxy(pX,pY+1);
    cout << "|##|    |##|";
    gotoxy(pX,pY+2);
    cout << "|##|    |##|";
    gotoxy(pX,pY+3);
    cout << "|##|    |##|";
    gotoxy(pX,pY+4);
    cout << "|####  ####|";

}
void eraseplayer(){
    gotoxy(pX,pY);
    cout << "            ";
    gotoxy(pX,pY+1);
    cout << "            ";
    gotoxy(pX,pY+2);
    cout << "            ";
    gotoxy(pX,pY+3);
    cout << "            ";
    gotoxy(pX,pY+4);
    cout << "            ";

}