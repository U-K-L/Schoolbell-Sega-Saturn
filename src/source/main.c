#include "../headers/sprite.h"
#include "../headers/utils.h"
#include "../headers/input.h"

int main(void)
{

    slInitSystem(TV_320x224, NULL, 1);
    struct Sprite sprite;
    initializeSprite(&sprite);
    int x = 0;
    int y = 0;

    // Game Loop.
	while(-1)
	{

        TIME += 1;
        
        int newPos[XYZ] = {x,y,toFIXED(220.0)};
        setSpritePosition(&sprite, newPos);
        renderSprite(&sprite);

        if(CheckInputs(0, 1, PER_DGT_TR) || CheckInputs(0, 1, PER_DGT_TL))
        {
            x += 4*slCos(TIME*1000);
            y += 4*slSin(TIME*1000);
        }

        if(CheckInputs(0, 1, PER_DGT_KR))
            x += toFIXED(5);
        if(CheckInputs(0,1,PER_DGT_KL))
            x -= toFIXED(5);
        if(CheckInputs(0, 1, PER_DGT_KU))
            y -= toFIXED(5);
        if(CheckInputs(0,1,PER_DGT_KD))
            y += toFIXED(5);

        slPopMatrix();
        slSynch();
	}
    //End Program
	return 0;
}
