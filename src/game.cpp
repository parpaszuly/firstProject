#include "game.h"
#include<graphics.h>
#include <conio.h>




int game::gameMain()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\tc\\bgi");
    circle(300,300,50);
    closegraph();
    getch();
}


game::game()
{
    //ctor
}

game::~game()
{
    //dtor
}
