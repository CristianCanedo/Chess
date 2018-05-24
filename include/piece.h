#ifndef PIECE_H
#define PIECE_H

#include "attributes.h"
#include "position.h"
#include "tile.h"

class Piece {

    public:
    void virtual moveTo(Tile);
    void virtual canMove(Tile);
    void virtual capture(Tile);
    bool virtual canCapture(Tile currPiece, Tile toCapture);
    void virtual setPosition(Tile);
    Position virtual getPosition();

};

#endif // PIECE_H