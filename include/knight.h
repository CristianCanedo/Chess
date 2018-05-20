#ifndef KNIGHT_H
#define KNIGHT_H

#include "position.h"
#include "piece.h"

class Knight : Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;

    public:
    Knight();
    ~Knight();

    void moveTo(Position) override;
    void canMove(Position) override;
    void capture(PieceType) override;
    bool canCapture(PieceType, PieceType) override;
    void updatePosition(PieceType) override;
};

#endif // KNIGHT_H