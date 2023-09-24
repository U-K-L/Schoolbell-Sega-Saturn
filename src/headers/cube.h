#include "sgl.h"

POINT point_planeCube[]={
POStoFIXED(-15.0,-15.0, 15.0),
POStoFIXED( 15.0,-15.0, 15.0),
POStoFIXED( 15.0, 15.0, 15.0),
POStoFIXED(-15.0, 15.0, 15.0),

POStoFIXED(-15.0,-15.0, -15.0),
POStoFIXED(15.0, -15.0, -15.0),
POStoFIXED( 15.0, 15.0, -15.0),
POStoFIXED( -15.0, 15.0, -15.0),
};
POLYGON polygon_planeCube[]={
NORMAL(0.0,0.0,1.0), VERTICES(0,1,2,3),
NORMAL(-1.0, 0.0, 0.0),VERTICES(4, 0, 3, 7),
NORMAL(0.0, 0.0, -1.0),VERTICES(5,4,7,6),
NORMAL(1.0, 0.0, 0.0),VERTICES(1,5,6,2),
NORMAL(0.0, -1.0, 0.0),VERTICES(4,5,1,0),
NORMAL(0.0,1.0,0.0),VERTICES(3,2,6,7),
};
ATTR attribute_planeCube[]={ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(31,31,31),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(31,00,00),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(00,31,00),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(00,00,31),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(31,31,00),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(00,31,31),No_Gouraud,MESHoff,sprPolygon,No_Option),};

PDATA CUBE={point_planeCube, sizeof(point_planeCube)/sizeof(POINT), polygon_planeCube, sizeof(polygon_planeCube)/sizeof(POLYGON), attribute_planeCube};