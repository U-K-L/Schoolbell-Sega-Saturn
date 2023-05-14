#ifndef SPRITE_H
#define SPRITE_H

#include "sgl.h"

extern PDATA PD_PLANE1;

struct Sprite {
    int pos[XYZ];
    ANGLE angle[XYZ];
};

void initializeSprite(struct Sprite *sprite);
void renderSprite(struct Sprite *sprite);

#endif