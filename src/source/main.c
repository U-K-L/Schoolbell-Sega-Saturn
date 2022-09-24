#include "sgl.h"

int main(void)
{
    slInitSystem(TV_320x224, NULL, 1);
    
    // Game Loop.
	while(1)
	{
        slPrint("Hello World", slLocate(0,0));
	}
    
    //End Program
	return 0;
}
