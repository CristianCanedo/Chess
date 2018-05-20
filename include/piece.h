#ifndef PIECE_H
#define PIECE_H

#include "attributes.h"
#include "position.h"

class Piece {

    public:
    void virtual moveTo(Position) = 0;
    void virtual canMove(Position) = 0;
    void virtual capture(PieceType) = 0;
    bool virtual canCapture(PieceType currPiece, PieceType toCapture) = 0;
    void virtual setPosition() = 0;
    Position virtual getPosition() = 0;

};

#endif // PIECE_H