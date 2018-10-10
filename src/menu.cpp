#include "menu.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <exception>

void centered(std::string str, bool inpos)
{
    for(int i=0;i<40;i++) std::cout<<" ";
    int console_width = 40;
    int len = str.length();
    if(len%2==0) str += " ";
    if(inpos)
    {
        std::cout<<std::setw((console_width/2)+len/2)\
    <<std::right<<str<<"  *";
    }
    else{
        std::cout<<std::setw((console_width/2)+len/2)\
    <<std::right<<str;
    }
    for(int i=0;i<40;i++) std::cout<<" ";
    std::cout << std::endl;
}


void initMenu(std::vector<std::string> s, int pos)
{

    if(s.size()>0)
    {
        system("cls");
        int i = s.size();
        std::cout<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
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

int menuhandler2(std::vector<std::string> s)
{


return 0;
}
