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
    //int z = toFIXED(220.0);
    int angleX = 0;
    int angleY = 0;
    int angleZ = 0;

    // Game Loop.
	while(-1)
	{

        TIME += 1;
        //x =slMulFX(toFIXED(z),x);
        int newPos[XYZ] = {x,y,toFIXED(220.0)};
        int angles[XYZ] = {angleX, angleY, angleZ};
        setSpritePosition(&sprite, newPos);
        setSpriteRotation(&sprite, angles);
        renderSprite(&sprite);

        if(CheckInputs(0, 2, PER_DGT_TL, PER_DGT_KU))
        {
            angleZ += DEGtoANG(100.0);
        }

        if(CheckInputs(0, 2, PER_DGT_TL, PER_DGT_KD))
        {
            angleY += DEGtoANG(100.0);
        }

        if(CheckInputs(0, 2, PER_DGT_TL, PER_DGT_KL) || CheckInputs(0, 2, PER_DGT_TL, PER_DGT_KR))
        {
            angleX += DEGtoANG(100.0);
        }
        /*

        if(CheckInputs(0, 1, PER_DGT_TR))
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
*/
        slPopMatrix();
        slSynch();
	}
    //End Program
	return 0;
}
