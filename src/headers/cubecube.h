/* Model Name: cubecube */
/* Total Objects: 3 */
/*
    -Camera
    -Cube
    -Lamp
*/

#include "sgl.h"
#define GRaddr 0xe000

POINT point_Cube[8] = {
   POStoFIXED( 1.000000,  1.000000, -1.000000),
   POStoFIXED( 1.000000, -1.000000, -1.000000),
   POStoFIXED(-1.000000, -1.000000, -1.000000),
   POStoFIXED(-1.000000,  1.000000, -1.000000),
   POStoFIXED( 1.000000,  0.999999,  1.000000),
   POStoFIXED( 0.999999, -1.000001,  1.000000),
   POStoFIXED(-1.000000, -1.000000,  1.000000),
   POStoFIXED(-1.000000,  1.000000,  1.000000),
};

POLYGON polygon_Cube[6] = {
   NORMAL( 0.000000,  0.000000, -1.000000), VERTICES(  0,   1,   2,   3),
   NORMAL( 0.000000, -0.000000,  1.000000), VERTICES(  4,   7,   6,   5),
   NORMAL( 1.000000, -0.000000,  0.000000), VERTICES(  0,   4,   5,   1),
   NORMAL(-0.000000, -1.000000, -0.000000), VERTICES(  1,   5,   6,   2),
   NORMAL(-1.000000,  0.000000, -0.000000), VERTICES(  2,   6,   7,   3),
   NORMAL( 0.000000,  1.000000,  0.000000), VERTICES(  4,   0,   3,   7),
};

ATTR attribute_Cube[6] = {
   ATTRIBUTE(Single_Plane, SORT_CEN,           No_Texture, C_RGB(31, 31, 31), GRaddr+  0,          MESHoff|CL_Gouraud, sprPolygon, UseGouraud),
   ATTRIBUTE(Single_Plane, SORT_CEN,           No_Texture, C_RGB(31, 31, 31), GRaddr+  1,          MESHoff|CL_Gouraud, sprPolygon, UseGouraud),
   ATTRIBUTE(Single_Plane, SORT_CEN,           No_Texture, C_RGB(31, 31, 31), GRaddr+  2,          MESHoff|CL_Gouraud, sprPolygon, UseGouraud),
   ATTRIBUTE(Single_Plane, SORT_CEN,           No_Texture, C_RGB(31, 31, 31), GRaddr+  3,          MESHoff|CL_Gouraud, sprPolygon, UseGouraud),
   ATTRIBUTE(Single_Plane, SORT_CEN,           No_Texture, C_RGB(31, 31, 31), GRaddr+  4,          MESHoff|CL_Gouraud, sprPolygon, UseGouraud),
   ATTRIBUTE(Single_Plane, SORT_CEN,           No_Texture, C_RGB(31, 31, 31), GRaddr+  5,          MESHoff|CL_Gouraud, sprPolygon, UseGouraud),
};

VECTOR vector_Cube[sizeof(point_Cube) / sizeof(POINT)];

XPDATA XPD_Cube[6] = {
   point_Cube, sizeof(point_Cube)/sizeof(POINT),
   polygon_Cube, sizeof(polygon_Cube)/sizeof(POLYGON),
   attribute_Cube,
   vector_Cube
};