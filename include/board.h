#ifndef BOARD_H
#define BOARD_H

#include "tile.h"

class Board {
    private:
    Tile* _board;

    public:
    Board();
    ~Board();

    void drawBoard();
    void updateBoard();
};

#endif // BOARD_H