#include "sgl.h"

POINT point_plane[]={
POStoFIXED(-15.0,-15.0,-15.0),
POStoFIXED( 15.0,-15.0,-15.0),
POStoFIXED( 15.0, 15.0,-15.0),
POStoFIXED(-15.0, 15.0,-15.0),
POStoFIXED(-15.0,-15.0, 15.0),
POStoFIXED(-15.0, 15.0, 15.0),
POStoFIXED( 15.0, 15.0, 15.0),
};
POLYGON polygon_plane[]={
NORMAL(0.0,0.0,-1.0),
VERTICES(0,1,2,3),
NORMAL(1.0, 0.0, 0.0),
VERTICES(1, 4, 7, 2),
NORMAL(0.0, 0.0, 1.0),
VERTICES(4,5,6,7),
NORMAL(-1.0, 0.0, 0.0),
VERTICES(5,0,3,6),
NORMAL(0.0, -1.0, 0.0),
VERTICES(4,1,0,5),
NORMAL(0.0,1.0,0.0),
VERTICES(2,7,6,3),
};
ATTR attribute_plane[]={ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(31,31,31),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(31,00,00),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(00,31,00),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(00,00,31),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(31,31,00),No_Gouraud,MESHoff,sprPolygon,No_Option),
ATTRIBUTE(Dual_Plane,SORT_MAX,No_Texture,C_RGB(00,31,31),No_Gouraud,MESHoff,sprPolygon,No_Option),};
PDATA CUBE={point_plane,
sizeof(point_plane)/sizeof(POINT),
polygon_plane,
sizeof(polygon_plane)/sizeof(POLYGON),
attribute_plane};