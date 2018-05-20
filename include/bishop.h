#ifndef BISHOP_H
#define BISHOP_H

#include "position.h"
#include "piece.h"

class Bishop : Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;

    public:
    Bishop();
    ~Bishop();

    void moveTo(Position) override;
    void canMove(Position) override;
    void capture(PieceType) override;
    bool canCapture(PieceType, PieceType) override;
    void updatePosition(PieceType) override;
};

#endif // BISHOP_H