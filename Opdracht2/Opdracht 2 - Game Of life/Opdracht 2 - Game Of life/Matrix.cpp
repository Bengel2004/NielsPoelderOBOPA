#include "Matrix.h"
#include<iostream>

Matrix::Matrix()
{
}

Matrix::~Matrix()
{
}

void Matrix::DrawCells()
{
	cells[0][3].SetAlive();
	for (int i = 0; i < 25; i++)
	{
		for (int i2 = 0; i2 < 25; i2++)
		{
			int _neighbourAliveCount = 0;
			if (cells[i - 1][i2].GetAlive()) 
			{
				_neighbourAliveCount += 1;
			}
			if (cells[i + 1][i2].GetAlive())
			{
				_neighbourAliveCount += 1;
			}
			if (cells[i][i2 - 1].GetAlive())
			{
				_neighbourAliveCount += 1;
			}
			if (cells[i][i2 + 1].GetAlive())
			{
				_neighbourAliveCount += 1;
			}

			if (_neighbourAliveCount < 2 || _neighbourAliveCount > 3) 
			{
				if (cells[i][i2].GetAlive()) 
				{
					cells[i][i2].Kill();
				}
			}
			if (_neighbourAliveCount > 3 && !cells[i][i2].GetAlive()) 
			{
				cells[i][i2].SetAlive();
			}
			
			cells[i][i2].Draw();

		}
			std::cout << std::endl;
		//if (i % 25)
		//{
		//}
		//else 
		//{
		//}
	}
	std::cout << std::string(10, '\n');
}
