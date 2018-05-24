#ifndef ROOK_H
#define ROOK_H

#include "position.h"
#include "piece.h"
#include "king.h"

class Rook : public Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;
    bool isFirstMove;

    public:
    Rook();
    ~Rook();

    void moveTo(Tile) override;
    void canMove(Tile) override;
    void capture(Tile) override;
    bool canCapture(Tile, Tile) override;
    void updatePosition(Tile) override;
    bool canCastle(Tile);
};

#endif // ROOK_H