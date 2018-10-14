#include "menu.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <exception>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);


void centered(std::string str, bool inpos)
{
    for(int i=0;i<45; i++)
    {
        std::cout<<" ";
    }
    SetConsoleTextAttribute(console,170);
    std::cout<<"##";
    SetConsoleTextAttribute(console,7);
    if(inpos)
    {
        SetConsoleTextAttribute(console, 23);
    }
    std::cout<<str;
    for(int i=0;i<25-str.size()+1;i++)
    {
        std::cout<<" ";
    }
    if(inpos)
    {
        SetConsoleTextAttribute(console,7);
    }
    SetConsoleTextAttribute(console,170);
    std::cout<<"##";
    SetConsoleTextAttribute(console,7);
    std::cout<<std::endl;
}



void initMenu(std::vector<std::string> s, int pos)
{






    if(s.size()>0)
    {
        system("cls");
        int i = s.size();
        std::cout<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
        for(int j=0;j<2;j++)
        {
        for(int i=0;i<45; i++)
        {
            std::cout<<" ";
        }
        SetConsoleTextAttribute(console,170);
        for(int i=0;i<30; i++)
        {
            std::cout<<"#";
        }
        SetConsoleTextAttribute(console,7);
        std::cout<<std::endl;
        }
        for(int j = 0;j<i;j++)
        {
        if(pos==j)
        {

            centered(s[j], true);

        }
        else{
            centered(s[j], false);
        }
        }
        for(int j=0;j<2;j++)
        {
        for(int i=0;i<45; i++)
        {
            std::cout<<" ";
        }
        SetConsoleTextAttribute(console,170);
        for(int i=0;i<30; i++)
        {
            std::cout<<"#";
        }
        SetConsoleTextAttribute(console,7);
        std::cout<<std::endl;
        }
    }

}


menu::menuhandler(std::vector<std::string> s)
{
int keyhit;
int pos = 0;
initMenu(s, pos);
while(true)
{
    keyhit = getch();

    if(keyhit==80)
    {
        if(pos==s.size()-1)pos=-1;
        pos++;
        initMenu(s, pos);

    }if(keyhit==72)
    {
        if(pos==0)pos=s.size();
        pos--;
        initMenu(s, pos);

    }else if(keyhit==13)
    {
        return pos;
    }
    else if(keyhit==27)
    {
         system("cls");
        std::cout<<pos;
        exit(0);


    }
}
return 0;
}
