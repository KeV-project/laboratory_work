#pragma once

#include <iostream>
#include "Output.h"

using namespace std;

struct Rectangle
{
	float Length;
	float Width;
	float Diagonal;
	string Color;
	float Perimeter;
	float Area;
};

Rectangle* MakeRectangle();
Rectangle* MakeRectangle(float length, float width, string color);
void ReadRectangle(Rectangle& rectangle);
void PrintRectangle(Rectangle& rectangle);
void DemoReadAndPrintRectangles(int rectanglesCount);
void ChangeRectangle(Rectangle* rectangle, float length,
	float width, string color);
void DemoRectangle();
