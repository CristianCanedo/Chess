#ifndef KING_H
#define KING_H

#include "position.h"
#include "piece.h"
#include "rook.h"

class King : Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;
    bool isFirstMove;
    bool isChecked;
    bool isCheckmated;

    public:
    King();
    ~King();

    void moveTo(Position) override;
    void canMove(Position) override;
    void capture(PieceType) override;
    bool canCapture(PieceType, PieceType) override;
    void updatePosition(PieceType) override;
    bool canCastle(Rook);

    void setCheck(bool);
    bool getCheck();

    void setCheckmate(bool);
    bool getCheckMate();
};

#endif // KING_H