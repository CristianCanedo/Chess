#ifndef KING_H
#define KING_H

#include "position.h"
#include "piece.h"
#include "rook.h"

class King : public Piece {
    
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

    void moveTo(Tile) override;
    void canMove(Tile) override;
    void capture(Tile) override;
    bool canCapture(Tile, Tile) override;
    void setPosition(Tile) override;
    bool canCastle(Rook);

    void setCheck(bool);
    bool getCheck();

    void setCheckmate(bool);
    bool getCheckMate();
};

#endif // KING_H