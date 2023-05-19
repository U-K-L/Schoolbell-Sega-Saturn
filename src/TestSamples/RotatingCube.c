#include "../headers/sprite.h"
#include "../headers/utils.h"
#include "../headers/input.h"

int RotatingCubeExample(void)
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

        if(CheckInputs(0, 1, PER_DGT_TX))
        {
            angleZ += DEGtoANG(6.0);
        }else if(CheckInputs(0, 1, PER_DGT_TC))
        {
            angleZ -= DEGtoANG(6.0);
        }

        if(CheckInputs(0, 1, PER_DGT_TL))
        {
            angleY += DEGtoANG(6.0);
        } else if(CheckInputs(0, 1, PER_DGT_TR))
        {
            angleY -= DEGtoANG(6.0);
        }
        else if(CheckInputs(0, 1, PER_DGT_TR))
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
}
