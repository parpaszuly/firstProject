#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <exception>
#include <menu.h>

using namespace std;

int main()
{
//    game game;
    menu mymenu;
    int cursorpos;
    std::vector<string> myVector;
    myVector.push_back("a");
    myVector.push_back("b");
    myVector.push_back("c");
    myVector.push_back("casdfgadg");
    myVector.push_back("c");
    myVector.push_back("csad");
    myVector.push_back("c");
    myVector.push_back("c");
    myVector.push_back("c");
    myVector.push_back("casdfgadg");
    myVector.push_back("c");
    myVector.push_back("csad");
while(true)
    {
    cursorpos = mymenu.menuhandler(myVector);
    if(cursorpos==0)
    {
        system("cls");
        //game.gameMain();
        getch();
    }
    if(cursorpos==1)
    {
        system("cls");
        cout<<"Ez egy B volt";
        getch();
    }
    if(cursorpos==2)
    {
        system("cls");
        cout<<"Ez egy c volt";
        getch();
    }
    }

    return 0;
}




