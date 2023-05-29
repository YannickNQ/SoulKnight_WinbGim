#include <iostream>
#include "winbgim.h"
#include <cstdlib>

const int M = 100;
const int H = 200;
const int E = 300;
const int P = 400;
const int B = 500;
const int A = 500;
const double M_PI = 3.141592653589793;


using namespace std;

struct colorheroe
{
    int BluishGreen = COLOR(109, 136, 144);
    int BrayishBlue = COLOR(131, 165, 172);
    int DarkBrayishBlue = COLOR(92, 104, 111);
    int MediumBrayishBlue = COLOR(101, 115, 123);
    int mLightGray = COLOR(76, 77, 86);
    int lightGray = COLOR(75, 82, 87);
    int darkGrayBlue = COLOR(62, 78, 87);
    int vinil = COLOR(40, 40, 48);
    int darkBlue = COLOR(43, 49, 55);
    int darkGray = COLOR(65, 68, 75);
    int lightDarkGray = COLOR(46, 49, 56);
    int lightBlueGray = COLOR(82, 89, 98);
    int darkGreen = COLOR(1, 28, 36);
    int mDarkGreen = COLOR(7, 53, 61);;
    int lDarkGreen = COLOR(12, 70, 84);
};

struct scale_rojo
{
    int DarkRed = COLOR(139, 0, 0);
    int IndianRed = COLOR(205, 92, 92);
    int FireBrick = COLOR(178, 34, 34);
    int Crimson = COLOR(220, 20, 60);
    int DarkSalmon = COLOR(233, 150, 122);
    int Tomato = COLOR(255, 99, 71);
    int Coral = COLOR(255, 127, 80);
    int Salmon = COLOR(250, 128, 114);
    int LightSalmon = COLOR(255, 160, 122);
    int RosyBrown = COLOR(188, 143, 143);
    int IndianRed2 = COLOR(205, 85, 85);
    int Sienna = COLOR(160, 82, 45);
    int SaddleBrown = COLOR(139, 69, 19);
    int Brown = COLOR(165, 42, 42);
    int Maroon = COLOR(128, 0, 0);
};

struct scale_azul
{
    int DarkBlue = COLOR(0, 0, 139);
    int MediumBlue = COLOR(0, 0, 205);
    int DodgerBlue = COLOR(30, 144, 255);
    int RoyalBlue = COLOR(65, 105, 225);
    int SteelBlue = COLOR(70, 130, 180);
    int LightSkyBlue = COLOR(135, 206, 250);
    int SkyBlue = COLOR(135, 206, 235);
    int LightBlue = COLOR(173, 216, 230);
    int PowderBlue = COLOR(176, 224, 230);
    int PaleTurquoise = COLOR(175, 238, 238);
    int MediumTurquoise = COLOR(72, 209, 204);
    int DarkTurquoise = COLOR(0, 206, 209);
    int LightCyan = COLOR(224, 255, 255);
    int Azure = COLOR(240, 255, 255);
    int AliceBlue = COLOR(240, 248, 255);
    int Lavender = COLOR(230, 230, 250);
    int White = COLOR(255, 255, 255);
};

struct KnightPalette
{
    int blueGray = COLOR(68, 85, 119);
    int mBlueGray = COLOR(102, 119, 136);
    int lBlueGray = COLOR(153, 170, 204);
    int darkRed = COLOR(136, 34, 51);
    int lightRed = COLOR(187, 51, 68);
    int yellow = COLOR(255, 187, 0);
    int orange = COLOR(221, 102, 17);
    int lOrange = COLOR(253, 219, 119);
    int darkOrange = COLOR(221, 136, 0);
    int Brown = COLOR(136, 68, 0);
    int purplePink = COLOR(187, 119, 199);
    int Skin = COLOR(238, 187, 153);
};

struct GreenPalette
{
    int blueGreen = COLOR(7, 50, 58);
    int mBlueGreen = COLOR(19, 78, 86);
    int lBlueGreen = COLOR(34, 87, 76);
    int darkGreen = COLOR(1, 28, 36);
    int mDarkGreen = COLOR(7, 53, 61);;
    int lDarkGreen = COLOR(12, 70, 84);
    int lGreen = COLOR(69, 144, 72);
    int mGreen = COLOR(62, 133, 77);;
    int Green = COLOR(40, 91, 60);
};


struct StoneWallPalette
{
    int BluishGreen = COLOR(109, 136, 144);
    int BrayishBlue = COLOR(131, 165, 172);
    int DarkBrayishBlue = COLOR(92, 104, 111);
    int MediumBrayishBlue = COLOR(101, 115, 123);
    int mLightGray = COLOR(76, 77, 86);
    int lightGray = COLOR(75, 82, 87);
    int darkGrayBlue = COLOR(62, 78, 87);
    int vinil = COLOR(40, 40, 48);
    int darkBlue = COLOR(43, 49, 55);
    int darkGray = COLOR(65, 68, 75);
    int lightDarkGray = COLOR(46, 49, 56);
    int lightBlueGray = COLOR(82, 89, 98);
};


struct Ladrillo
{
    int mediumBrown = COLOR(131, 80,42);
    int lightBrown = COLOR(147, 93, 59);
    int darkBrown = COLOR(85, 57, 35);
    int brown = COLOR(145, 129,103);
};


struct Color
{
    int Orange = COLOR(249, 157, 23);
    int LightOrange = COLOR(253, 184, 99);
    int SkyBlue = COLOR(66, 129, 248);
    int LightSkyBlue = COLOR(123, 217, 215);
    int DarkGreenBlue = COLOR(25, 42, 50);
    int DarkGreenBlue2 = COLOR(31, 53, 64);
    int Turquoise = COLOR(50, 195, 189);
    int Golden = COLOR(242, 178, 55);
    int BlueCold = COLOR(242, 242, 242);
    int Dark = COLOR(35, 35, 35);
    int Red = COLOR(198, 80, 80);
    int GreenTurquoise = COLOR(3, 222, 135);
};
struct OrangePalette
{
    int DarkOrange1 = COLOR(255, 0, 0);
    int DarkOrange2 = COLOR(255, 23, 0);
    int DarkOrange3 = COLOR(255, 46, 0);
    int DarkOrange4 = COLOR(255, 69, 0);
    int DarkOrange5 = COLOR(255, 92, 0);
    int DarkOrange6 = COLOR(255, 115, 0);
    int DarkOrange7 = COLOR(255, 139, 0);
    int DarkOrange8 = COLOR(255, 162, 0);
    int DarkOrange9 = COLOR(255, 185, 0);
    int DarkOrange10 = COLOR(255, 208, 0);
    int DarkOrange11 = COLOR(255, 231, 0);
    int DarkOrange12 = COLOR(255, 255, 0);
};


int juego[28][40] = {
    {M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,0,M,M,M,M,M,M,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,M,M,M,M,M,M,M,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,0,0,M},
    {M,0,0,M,M,M,M,M,M,M,M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M,M,M,M,M,M,M,M,M,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,M},
    {M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M,0,0,0,0,0,0,0,0,0,M,M,M,M,M,M,M,M,M,M,M,M,M,M,M},
};

int ih = 3;
int jh = 3;

void getxy(int x, int y, int L, int alfa, int& _x, int& _y) {
    _x = L * cos(M_PI * alfa / 180) + x;
    _y = L * sin(M_PI * alfa / 180) + y;
}

void putRandomPixel(int xmin, int ymin, int xmax, int ymax, int e, int color)
{
    int rectX = xmin + (rand() % (xmax - xmin - e));
    int rectY = ymin + (rand() % (ymax - ymin - e));

    for (int x = rectX; x < rectX + e; x++)
    {
        for (int y = rectY; y < rectY + e; y++)
        {
            putpixel(x, y, color);
        }
    }
}

void muro(int x, int y, int e, int color) 
{
    //Cuadrados de la parte Parte superior
    setcolor(StoneWallPalette().BluishGreen);
    rectangle(x, y, x + 2.9 * e, y + 2.8 * e);
    rectangle(x + .2 * e, y + .2 * e, x + 2.7 * e, y + 2.6 * e);
    rectangle(x + .4 * e, y + .4 * e, x + 2.5 * e, y + 2.4 * e);
    rectangle(x + .6 * e, y + .6 * e, x + 2.3 * e, y + 2.2 * e);
    rectangle(x + .8 * e, y + .8 * e, x + 2.1 * e, y + 2.0 * e);
    rectangle(x + 1.2 * e, y + 1.2 * e, x + 1.7 * e, y + 1.6 * e);

    //Rectangulos parte inferior
    setcolor(StoneWallPalette().vinil);
    rectangle(x, y + 3.1 * e, x + 2.9 * e, y + 4.5 * e);
    rectangle(x + 2 * e, y + 3.3 * e, x + 2.7 * e, y + 4.3 * e);
    rectangle(x + .5 * e, y + 3.5 * e, x + 2.4 * e, y + 4.0 * e);
    rectangle(x + .7 * e, y + 3.7 * e, x + 2.4 * e, y + 4.0 * e);
    rectangle(x + 3 * e, y + 3.1 * e, x + 3 * e, y + 4.6 * e);


    setcolor(GreenPalette().darkGreen);
    rectangle(x, y + 4.6 * e, x + 3 * e, y + 6 * e);
    setfillstyle(SOLID_FILL, GreenPalette().darkGreen);
    floodfill(x + .1 * e, y + 4.7 * e, GreenPalette().darkGreen); 
    

    //Relleno para la parte superior
    setfillstyle(SOLID_FILL, StoneWallPalette().BluishGreen);
    floodfill(x + .1 * e, y + .1 * e, StoneWallPalette().BluishGreen);
    floodfill(x + .7 * e, y + .7 * e, StoneWallPalette().BluishGreen);
    setfillstyle(SOLID_FILL, StoneWallPalette().BrayishBlue);
    floodfill(x + .3 * e, y + .3 * e, StoneWallPalette().BluishGreen);
    floodfill(x + .9 * e, y + .9 * e, StoneWallPalette().BluishGreen);
    setfillstyle(SOLID_FILL, StoneWallPalette().DarkBrayishBlue);
    floodfill(x + .5 * e, y + .5 * e, StoneWallPalette().BluishGreen);
    setfillstyle(SOLID_FILL, StoneWallPalette().MediumBrayishBlue);
    floodfill(x + 1.3 * e, y + 1.3 * e, StoneWallPalette().BluishGreen);
    setcolor(StoneWallPalette().mLightGray);
    rectangle(x + 2.9 * e, y, x + 3 * e, y + 2.8 * e);
    rectangle(x, y + 2.9 * e, x + 3 * e, y + 3 * e);

    //Relleno para la parte Inferior
    setfillstyle(SOLID_FILL, StoneWallPalette().vinil);
    floodfill(x + .1 * e, y + 3.2 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().darkGray);
    floodfill(x + .3 * e, y + 3.4 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().vinil);
    floodfill(x + .6 * e, y + 3.6 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().lightDarkGray);
    floodfill(x + .8 * e, y + 3.9 * e, StoneWallPalette().vinil);

    setcolor(StoneWallPalette().lightBlueGray);
    rectangle(x + .5 * e, y + 4.1 * e, x + 2.5 * e, y + 4.1 * e);
}
int blueGreenPalette[] = {
    COLOR(7, 50, 58),   // blueGreen
    COLOR(19, 78, 86),  // mBlueGreen
    COLOR(34, 87, 76),  // lBlueGreen
    COLOR(1, 28, 36),   // darkGreen
    COLOR(7, 53, 61),   // mDarkGreen
    COLOR(12, 70, 84),  // lDarkGreen
    COLOR(69, 144, 72), // lGreen
    COLOR(62, 133, 77), // mGreen
    COLOR(40, 91, 60)   // Green
};
int greenPalette[] = {
    COLOR(27, 94, 32),   //DarkGreen
    COLOR(46, 125, 50),
    COLOR(56, 142, 60),
    COLOR(67, 160, 71),
    COLOR(76, 175, 80),
    COLOR(102, 187, 106),
    COLOR(118, 222, 112),
    COLOR(136, 235, 118), // lightGreen
};

void drawBlueWall(int x, int y, int e)
{
    setcolor(StoneWallPalette().vinil);
    int colorIndex = 0;
    ////Parte de Arriba
    for (float i = 0; i < 1.2; i += 0.2)
    {
        rectangle(x + i * e, y + i * e, x + (2.8 - i) * e, y + (2.8 - i) * e);

        setfillstyle(SOLID_FILL, blueGreenPalette[colorIndex]);
        floodfill(x + (i + 0.1) * e, y + (i + 0.1) * e, StoneWallPalette().vinil);
        colorIndex = (colorIndex + 1) % 9;
    }

    line(x, y, x + 2.8 * e, y + 2.8 * e);
    line(x + 2.8 * e, y, x, y + 2.8 * e);

    rectangle(x + 2.8 * e, y, x + 3 * e, y + 2.8 * e);
    rectangle(x, y + 2.8 * e, x + 3 * e, y + 3 * e);

    setfillstyle(SOLID_FILL, GreenPalette().darkGreen);
    floodfill(x + 2.9 * e, y + 0.1 * e, StoneWallPalette().vinil);
    rectangle(x + 0.1 * e, y + 2.9 * e, x + 3 * e, y + 3 * e);

    //Rectangulos parte inferior
    setcolor(StoneWallPalette().vinil);
    rectangle(x, y + 3.1 * e, x + 2.9 * e, y + 4.5 * e);
    rectangle(x + .2 * e, y + 3.3 * e, x + 2.7 * e, y + 4.3 * e);
    rectangle(x + .5 * e, y + 3.5 * e, x + 2.4 * e, y + 4.0 * e);
    rectangle(x + .7 * e, y + 3.7 * e, x + 2.4 * e, y + 4.0 * e);
    rectangle(x + 3 * e, y + 3.1 * e, x + 3 * e, y + 4.6 * e);
    //Relleno para la parte Inferior
    setfillstyle(SOLID_FILL, StoneWallPalette().vinil);
    floodfill(x + .1 * e, y + 3.2 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().darkGray);
    floodfill(x + .3 * e, y + 3.4 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().vinil);
    floodfill(x + .6 * e, y + 3.6 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().lightDarkGray);
    floodfill(x + .8 * e, y + 3.9 * e, StoneWallPalette().vinil);
}
void drawGreenWall(int x, int y, int e)
{
    setcolor(greenPalette[0]);
    int colorIndex = 0;
    ////Parte de Arriba
    for (float i = 0; i < 1.2; i += 0.2)
    {
        rectangle(x + i * e, y + i * e, x + (2.8 - i) * e, y + (2.8 - i) * e);

        setfillstyle(SOLID_FILL, greenPalette[colorIndex]);
        floodfill(x + (i + 0.1) * e, y + (i + 0.1) * e, greenPalette[0]);
        colorIndex = (colorIndex + 1) % 9;
    }

    line(x, y, x + 2.8 * e, y + 2.8 * e);
    line(x + 2.8 * e, y, x, y + 2.8 * e);

    rectangle(x + 2.8 * e, y, x + 3 * e, y + 2.8 * e);
    rectangle(x, y + 2.8 * e, x + 3 * e, y + 3 * e);

    setfillstyle(SOLID_FILL, GreenPalette().darkGreen);
    floodfill(x + 2.9 * e, y + 0.1 * e, greenPalette[0]);
    rectangle(x + 0.1 * e, y + 2.9 * e, x + 3 * e, y + 3 * e);

    //Rectangulos parte inferior
    setcolor(StoneWallPalette().vinil);
    rectangle(x, y + 3.1 * e, x + 2.9 * e, y + 4.5 * e);
    rectangle(x + .2 * e, y + 3.3 * e, x + 2.7 * e, y + 4.3 * e);
    rectangle(x + .5 * e, y + 3.5 * e, x + 2.4 * e, y + 4.0 * e);
    rectangle(x + .7 * e, y + 3.7 * e, x + 2.4 * e, y + 4.0 * e);
    rectangle(x + 3 * e, y + 3.1 * e, x + 3 * e, y + 4.6 * e);
    //Relleno para la parte Inferior
    setfillstyle(SOLID_FILL, StoneWallPalette().vinil);
    floodfill(x + .1 * e, y + 3.2 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().darkGray);
    floodfill(x + .3 * e, y + 3.4 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().vinil);
    floodfill(x + .6 * e, y + 3.6 * e, StoneWallPalette().vinil);
    setfillstyle(SOLID_FILL, StoneWallPalette().lightDarkGray);
    floodfill(x + .8 * e, y + 3.9 * e, StoneWallPalette().vinil);

    for (int i = 0; i < 80; i++) {
        putRandomPixel(x, y, x + 2.9 * e, y + 2.9 * e, e / 10, GreenPalette().darkGreen);
    }
}

void fuego_azul_1(int x, int y, int e) {

    scale_azul colorA;
    setcolor(colorA.DodgerBlue);
    setfillstyle(SOLID_FILL, colorA.DodgerBlue);
    int fuego_1[] = {
        (x + 5 * e),(y + 14 * e),
        (x + 3 * e),(y + 13 * e),
        (x + 2 * e),(y + 12 * e),
        (x + e),(y + 9 * e),
        (x + 2 * e),(y + 6 * e),
        (x + 3 * e),(y + 4 * e),
        (x + 2 * e),(y + 1 * e),
        (x + 6 * e),(y + 2 * e),
        (x + 7 * e),(y + 4 * e),
        (x + 8 * e),(y + 7 * e),
        (x + 8 * e),(y + 9 * e),
        (x + 7 * e),(y + 13 * e)
    };
    fillpoly(12, fuego_1);
    setcolor(colorA.SkyBlue);
    setfillstyle(SOLID_FILL, colorA.SkyBlue);
    int fuego_2[] = {
        (x + 5 * e),(y + 14 * e),
        (x + 3 * e),(y + 12 * e),
        (x + 2 * e),(y + 10 * e),
        (x + 2 * e),(y + 8 * e),
        (x + 4 * e),(y + 5 * e),
        (x + 4 * e),(y + 3 * e),
        (x + 7 * e),(y + 6 * e),
        (x + 7 * e),(y + 7 * e),
        (x + 6 * e),(y + 10 * e),
        (x + 6 * e),(y + 11 * e),
        (x + 6 * e),(y + 12 * e)
    };
    fillpoly(11, fuego_2);
}

void fuego_azul_2(int x, int y, int e) {

    scale_azul colorA;
    setcolor(colorA.DodgerBlue);
    setfillstyle(SOLID_FILL, colorA.DodgerBlue);
    int fuego_1[] = {
        (x + 5 * e),(y + 14 * e),
        (x + 2 * e),(y + 12 * e),
        (x + e),(y + 10 * e),
        (x + e),(y + 8 * e),
        (x + 3 * e),(y + 5 * e),
        (x + 4 * e),(y + 4 * e),
        (x + 5 * e),(y + 1 * e),
        (x + 6 * e),(y + 3 * e),
        (x + 6 * e),(y + 5 * e),
        (x + 5 * e),(y + 7 * e),
        (x + 7 * e),(y + 6 * e),
        (x + 8 * e),(y + 8 * e),
        (x + 7 * e),(y + 11 * e),
        (x + 6 * e),(y + 13 * e)
    };
    fillpoly(14, fuego_1);
    setcolor(colorA.SkyBlue);
    setfillstyle(SOLID_FILL, colorA.SkyBlue);
    int fuego_2[] = {
        (x + 5 * e),(y + 14 * e),
        (x + 2 * e),(y + 11 * e),
        (x + 2 * e),(y + 9 * e),
        (x + 3 * e),(y + 7 * e),
        (x + 5 * e),(y + 5 * e),
        (x + 5 * e),(y + 6 * e),
        (x + 5 * e),(y + 9 * e),
        (x + 5 * e),(y + 9 * e),//
        (x + 6 * e),(y + 10 * e),
        (x + 6 * e),(y + 11 * e),
        (x + 6 * e),(y + 12 * e)
    };
    fillpoly(11, fuego_2);
}



void heroe(int x, int y, int e)
{
    setcolor(0);
    int x1, y1, x2, y2;
    scale_rojo colorR;
    scale_azul colorA;

    setfillstyle(SOLID_FILL, BLACK);
    getxy(x + 15 * e, y + 10 * e, 15 * e, 180, x1, y1);
    fillellipse(x + 15 * e, y + 10 * e, 15 * e, 10 * e);
    int cuerpo[] = {
        static_cast<int>(x1),
        static_cast<int>(y1),
        static_cast<int>(x + 5 * e),
        static_cast<int>(y + 35 * e),
        static_cast<int>(x + 25 * e),
        static_cast<int>(y + 35 * e),
        static_cast<int>(x + 30 * e),
        static_cast<int>(y + 10 * e)
    };
    fillpoly(4, cuerpo);

    // Cinta
    setfillstyle(SOLID_FILL, colorR.Maroon);

    int chali_2[] = {
        static_cast<int>(x + 27.5 * e),
        static_cast<int>(y + 24 * e),
        static_cast<int>(x + 26.5 * e),
        static_cast<int>(y + 29 * e),
        static_cast<int>(x + 13 * e),
        static_cast<int>(y + 29 * e)
    };
    fillpoly(3, chali_2);
    setfillstyle(SOLID_FILL, RED);
    int chali_1[] = {
        static_cast<int>(x + 2.5 * e),
        static_cast<int>(y + 24 * e),
        static_cast<int>(x + 28 * e),
        static_cast<int>(y + 20 * e),
        static_cast<int>(x + 27.5 * e),
        static_cast<int>(y + 25 * e),
        static_cast<int>(x + 4 * e),
        static_cast<int>(y + 32 * e)
    };
    fillpoly(4, chali_1);
    setcolor(RED);

    setfillstyle(SOLID_FILL, colorR.DarkRed);
    int chali_3[] = {
        static_cast<int>(x + 4 * e),
        static_cast<int>(y + 25 * e),
        static_cast<int>(x + 27 * e),
        static_cast<int>(y + 21 * e),
        static_cast<int>(x + 27 * e),
        static_cast<int>(y + 24 * e),
        static_cast<int>(x + 5 * e),
        static_cast<int>(y + 30 * e)
    };
    fillpoly(4, chali_3);

    // Pies
    setfillstyle(SOLID_FILL, BLACK);
    bar(x + 8 * e, y + 35 * e, x + 12 * e, y + 38 * e);
    bar(x + 18 * e, y + 35 * e, x + 22 * e, y + 38 * e);

    // Ojos

    fuego_azul_1(x + 8 * e, y + 12 * e, e/2);
    fuego_azul_1(x + 20 * e, y + 12 * e, e/2);

    //Bufanda
    // setfillstyle(SOLID_FILL,8);
    // line(x+10*e,y+22*e,x+5*e,y+15*e);
    // line(x+5*e,y+15*e,x+3*e,y+7*e);
    // line(x+3*e,y+7*e,x+7*e,y+7*e);
    // line(x+7*e,y+7*e,x+6*e,y+13*e);
    // line(x+6*e,y+13*e,x+10*e,y+22*e);
    // int cola[] = {x+10*e,y+22*e,x+5*e,y+15*e,x+3*e,y+7*e,x+7*e,y+7*e,x+6*e,y+13*e};
    // fillpoly(5, cola);

}

void arma_1(int x, int y, int e)
{
    setfillstyle(SOLID_FILL, 0);
    bar(x + e, y + 2 * e, x + 4 * e, y + 3.5 * e);
    setfillstyle(SOLID_FILL, 0);
    bar(x + 4 * e, y + e, x + 5 * e, y + 4.5 * e);
    setfillstyle(SOLID_FILL, 14);
    bar(x + 5 * e, y + e, x + 6 * e, y + 4.5 * e);
    setfillstyle(SOLID_FILL, 15);
    bar(x + 6 * e, y + 2 * e, x + 15 * e, y + 2.75 * e);
    setfillstyle(SOLID_FILL, 15);
    bar(x + 6 * e, y + 2.75 * e, x + 14 * e, y + 3.5 * e);
}

void arma_2(int x, int y, int e)
{
    setfillstyle(SOLID_FILL, 7);
    bar(x + e, y + 3 * e, x + 2 * e, y + 5 * e);
    setfillstyle(SOLID_FILL, 7);
    bar(x + 2 * e, y + 2 * e, x + 3 * e, y + 4 * e);
    setfillstyle(SOLID_FILL, BLACK);
    bar(x + 3 * e, y + e, x + 9 * e, y + 4 * e);
    setfillstyle(SOLID_FILL, 7);
    bar(x + 4 * e, y + 2 * e, x + 8 * e, y + 3 * e);
}



void bala_1(int x, int y, int e, int col)
{
    for (float i = 1.5; i > 0; i -= 0.5)
    {
        setlinestyle(SOLID_LINE, 0, 3);
        setcolor(col++);
        //setfillstyle(SOLID_FILL,col++);
        fillellipse(x + e, y + e, i * e, i * e);
    }

}

void arma_3(int x, int y, int e)
{
    int arma_2[] = {
        static_cast<int>(x + e),
        static_cast<int>(y + 1.5 * e),
        static_cast<int>(x + 3.5 * e),
        static_cast<int>(y + 1.5 * e),
        static_cast<int>(x + e),
        static_cast<int>(y + 4 * e)
    };
    fillpoly(3, arma_2);
    setfillstyle(SOLID_FILL, 14);
    bar(x + 2.8 * e, y + e, x + 12 * e, y + 3 * e);
    setfillstyle(SOLID_FILL, 14);
    bar(x + 2.8 * e, y + 3 * e, x + 7 * e, y + 5.8 * e);
    setfillstyle(SOLID_FILL, 0);
    bar(x + 4 * e, y + 3.2 * e, x + 6.8 * e, y + 5.2 * e);
    setfillstyle(SOLID_FILL, 0);
    bar(x + 9 * e, y + 3 * e, x + 10 * e, y + 5.2 * e);
    setfillstyle(SOLID_FILL, 0);
    bar(x + 12 * e, y + 1.3 * e, x + 14 * e, y + 1.8 * e);
}

void dibujarJuego(int x, int y, int e) {
    for (int i = 0; i < 28; i++) {
        for (int j = 0; j < 40; j++) {
            if (juego[i][j] == 0)
            {
                drawGreenWall(x + j * e * 3, y + i * e * 3, e);
            }
            else if (juego[i][j] == M) {
                muro(x + j * e * 3, y + i * e * 3, e, 10);
            }
            else if (juego[i][j] == P)
            {
                drawGreenWall(x + j * e * 3, y + i * e * 3, e);
            }
            else if (juego[i][j] == B)
            {
                drawBlueWall(x + j * e * 3, y + i * e * 3, e);
            }
            else if (juego[i][j] == A)
            {
                arma_1(x + j * e * 3, y + i * e * 3, e);
            }
        }
    }
    heroe(300, 300, 2);
    arma_1(500, 200, 5);
    arma_2(500, 300, 5);
    arma_3(500, 400, 5);

    bala_1(580, 300, 8, 10);
    bala_1(580, 400, 8, 4);
}
void jugar(int x, int y, int e) {
    juego[ih][jh] = H;
    int tecla = 0;
    while (true) {
        dibujarJuego(x, y, e);
        tecla = getch();
        if (tecla == 72) {
            if (juego[ih - 1][jh] != M) {
                juego[ih][jh] = 0;
                ih--;
                juego[ih][jh] = H;
            }
        }
        if (tecla == 80) {
            if (juego[ih + 1][jh] != M) {
                juego[ih][jh] = 0;
                ih++;
                juego[ih][jh] = H;
            }
        }
        if (tecla == 75) {
            if (juego[ih][jh-1] != M) {
                juego[ih][jh] = 0;
                jh--;
                juego[ih][jh] = H;
            }
        }
        if (tecla == 77) {
            if (juego[ih][jh+1] != M) {
                juego[ih][jh] = 0;
                jh++;
                juego[ih][jh] = H;
            }
        }
        //cleardevice();
    }
}

int main()
{
    initwindow(1210, 670);
    jugar(0, 0, 10);
    getch();
    closegraph();
    return 0;
}