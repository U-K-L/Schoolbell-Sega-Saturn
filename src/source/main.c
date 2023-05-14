#include "../headers/sprite.h"

int main(void)
{

    slInitSystem(TV_320x224, NULL, 1);
    struct Sprite sprite;
    initializeSprite(&sprite);
    // Game Loop.
	while(-1)
	{
        renderSprite(&sprite);
        slPopMatrix();
        slSynch();
	}
    //End Program
	return 0;
}
