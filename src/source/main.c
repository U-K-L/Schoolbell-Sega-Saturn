#include "../headers/sprite.h"
#include "../headers/utils.h"

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
        slPrintFX(TIME, slLocate(0,0));
        int newPos[XYZ] = {x,y,toFIXED(220.0)};
        setSpritePosition(&sprite, newPos);
        renderSprite(&sprite);
        x = 50*slCos(TIME*1000);
        y = 50*slSin(TIME*1000);
        slPopMatrix();
        slSynch();
	}
    //End Program
	return 0;
}
