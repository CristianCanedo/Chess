#ifndef QUEEN_H
#define QUEEN_H

#include "position.h"
#include "piece.h"
#include "tile.h"

class Queen : public Piece {
    
    private:
    Color _color;
    Tile _pos;
    Tile isCaptured;

    public:
    Queen();
    ~Queen();

    void moveTo(Tile) override;
    void canMove(Tile) override;
    void capture(Tile) override;
    bool canCapture(Tile, Tile) override;
    void setPosition(Tile) override;
};

#endif // QUEEN_H