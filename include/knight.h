#ifndef KNIGHT_H
#define KNIGHT_H

#include "position.h"
#include "piece.h"

class Knight : public Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;

    public:
    Knight();
    ~Knight();

    void moveTo(Tile) override;
    void canMove(Tile) override;
    void capture(Tile) override;
    bool canCapture(Tile, Tile) override;
    void setPosition(Tile) override;
};

#endif // KNIGHT_H