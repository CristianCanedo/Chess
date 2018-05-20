#ifndef PIECE_H
#define PIECE_H

#include "attributes.h"
#include "position.h"
#include "tile.h"

class Piece {

    public:
    void virtual moveTo(Tile) = 0;
    void virtual canMove(Tile) = 0;
    void virtual capture(Tile) = 0;
    bool virtual canCapture(Tile currPiece, Tile toCapture) = 0;
    void virtual setPosition(Tile) = 0;
    Position virtual getPosition() = 0;

};

#endif // PIECE_H