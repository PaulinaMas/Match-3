#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>


class Gem
{
public:
	const int tile_size = 100;
	int kind, pos_x, pos_y, col, row;
	bool match = 0;


	Gem() = default;
	Gem( int i, int j);
	Gem& operator=(const Gem& other);
};
