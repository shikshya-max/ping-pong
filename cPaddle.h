#pragma once
#include"cBall.h"

class cPaddle
{

    private:
        int x, y;
        int originalX, originalY;
    public:
        cPaddle();

        cPaddle(int posX, int posY);

         void Reset();
         int getX();
         int getY();
         void moveUp();
         void moveDown();
        friend ostream& operator<<(ostream& o, cPaddle c);


};

