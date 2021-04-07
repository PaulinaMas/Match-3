#include "Board.h"


using namespace std;


	Board::Board(int h, int w) : height(h), width(w) {
	}
	void Board::create_board()
	{
		srand(time(0)); //for tile kind
		for (int i = 0; i < height + 2; i++) //to avoid out of range problem
		{
			board.push_back(vector<Gem>());
			for (int j = 0; j < width + 2; j++)
			{
				Gem a(i, j);
				board[i].push_back(a);
			}
		}
	}
	void Board::add_to_pos(int a, int b, int pst)
	{
		pair<int, int> temp(a, b);
		positions[pst] = temp;
	}

	vector<vector<Gem>> Board::get_board()
	{
		return board;
	}

	void Board::clearBoard()
	{
		for (int i = 1; i <= height; i++)
			for (int j = 1; j <= width; j++)
				board[i][j].match = 1;
	}
