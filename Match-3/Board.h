#pragma once
#include <iostream>
//#include <cstdlib>
#include <vector>
#include <time.h>
#include "Gem.h"
using namespace std;

class Board
{
public:
	int height = 0, width = 0;
	vector<vector<Gem>> board;
	vector<pair<int, int> > positions{ 2 };


	Board() = default;
	Board(int h, int w);
	void create_board();
	void add_to_pos(int a, int b, int pst);
	vector<vector<Gem>> get_board();
	void clearBoard();
};
