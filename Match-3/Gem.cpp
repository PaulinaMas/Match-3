#include "Gem.h"


	Gem::Gem( int i, int j)
	{
		pos_x = j * tile_size;
		pos_y = i * tile_size;
		col = j;
		row = i;
		kind = rand() % 5;

	}
	Gem& Gem::operator=(const Gem& other)
	{
		this->kind = other.kind;
		this->col = other.col;
		this->row = other.row;
		this->match = other.match;
		return *this;
	}

