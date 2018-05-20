#ifndef QUEEN_H
#define QUEEN_H

#include "position.h"
#include "piece.h"
#include "tile.h"

class Queen : Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;

    public:
    Queen();
    ~Queen();

    void moveTo(Position) override;
    void canMove(Position) override;
    void capture(PieceType) override;
    bool canCapture(Tile, Tile) override;
    void setPosition() override;
};

#endif // QUEEN_H