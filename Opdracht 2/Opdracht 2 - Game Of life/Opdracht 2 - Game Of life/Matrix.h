#pragma once

#include "Cell.h"

class Matrix
{
public:
	Matrix();
	~Matrix();
	void DrawCells();

private:
	Cell cells[25][25];
};

