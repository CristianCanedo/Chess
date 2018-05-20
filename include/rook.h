#ifndef ROOK_H
#define ROOK_H

#include "position.h"
#include "piece.h"
#include "king.h"

class Rook : Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;
    bool isFirstMove;

    public:
    Rook();
    ~Rook();

    void moveTo(Position) override;
    void canMove(Position) override;
    void capture(PieceType) override;
    bool canCapture(PieceType, PieceType) override;
    void updatePosition(PieceType) override;
    bool canCastle(King);
};

#endif // ROOK_H