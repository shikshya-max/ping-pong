#ifndef CBALL_H
#define CBALL_H

#include <iostream>
#include <time.h>
#include <conio.h>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
enum  eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };





class cBall
{

    int x, y;
    int originalX, originalY;

    eDir direction;

public:

    cBall(int posX, int posY);
    void Reset();
    void changeDirection(eDir d);
    void randomDirection();
     int getX();
     int getY();
     eDir getDirection();
    friend ostream& operator<<(ostream& o, cBall c);
    void Move();

};

#endif

