#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <exception>
using namespace std;




void centered(string str, bool inpos)
{
    for(int i=0;i<40;i++) cout<<" ";
    int console_width = 40;
    int len = str.length();
    if(len%2==0) str += " ";
    if(inpos)
    {
        cout<<setw((console_width/2)+len/2)\
    <<right<<str<<"  *";
    }
    else{
        cout<<setw((console_width/2)+len/2)\
    <<right<<str;
    }
    for(int i=0;i<40;i++) cout<<" ";
    cout << endl;
}


void initMenu(std::vector<string> s, int pos)
{

    if(s.size()>0)
    {
        system("cls");
        int i = s.size();
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
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


int menuhandler(std::vector<string> s)
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
        cout<<pos;
        exit(0);


    }
}
return 0;
}

int menuhandler2(std::vector<string> s)
{


return 0;
}


int main()
{
    int cursorpos;
    std::vector<string> myVector;
    myVector.push_back("a");
    myVector.push_back("b");
    myVector.push_back("c");
    myVector.push_back("c");
    myVector.push_back("c");
    myVector.push_back("c");
    myVector.push_back("c");
    myVector.push_back("c");
while(true)
    {
    cursorpos = menuhandler(myVector);
    if(cursorpos==0)
    {
        system("cls");
        cout<<"Ez egy A volt";
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




