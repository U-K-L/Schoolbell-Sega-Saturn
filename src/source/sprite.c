#include "../headers/sprite.h"
#include "../headers/polygon.h"
#include "../headers/cube.h"
#include "../headers/magnusTest.h"

void initializeSprite(struct Sprite *sprite)
{
    //Initialize angle
    sprite->angle[X] = sprite->angle[Y] = sprite->angle[Z] = DEGtoANG(0.0);
    //Initialize position
    sprite->pos[X] = sprite->pos[Y] = sprite->pos[Z] = toFIXED(0.0);
    sprite->pos[Z] = toFIXED(220.0);
}

void renderSprite(struct Sprite *sprite)
{
    //slPrint("Showing a polygon...", slLocate(0,0));
    slPushMatrix();
    {
        slTranslate(sprite->pos[X], sprite->pos[Y], sprite->pos[Z]);
        slRotX(sprite->angle[X]);
        slRotY(sprite->angle[Y]);
        slRotZ(sprite->angle[Z]);
        slPutPolygon(&MAGNUS);
    }
}

void translateSpritePosition(struct Sprite *sprite, int pos[XYZ])
{
    sprite->pos[X] += pos[X];
    sprite->pos[Y] += pos[Y]; 
    sprite->pos[Z] += pos[Z]; 
}

void setSpritePosition(struct Sprite *sprite, int pos[XYZ])
{
    sprite->pos[X] = pos[X];
    sprite->pos[Y] = pos[Y]; 
    sprite->pos[Z] = pos[Z]; 
}

void setSpriteRotation(struct Sprite *sprite, int angle[XYZ])
{
    sprite->angle[X] = angle[X];
    sprite->angle[Y] = angle[Y]; 
    sprite->angle[Z] = angle[Z]; 
}