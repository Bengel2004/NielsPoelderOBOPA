#pragma once
class Cell
{
public:
	Cell();
	~Cell();
	void Kill();
	void Draw();
	void SetAlive();
	bool GetAlive();

private:
	bool isAlive = false;
};

