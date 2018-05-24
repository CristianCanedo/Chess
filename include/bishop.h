#ifndef BISHOP_H
#define BISHOP_H

#include "position.h"
#include "piece.h"

class Bishop : public Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;

    public:
    Bishop();
    ~Bishop();

    void moveTo(Tile) override;
    void canMove(Tile) override;
    void capture(Tile) override;
    bool canCapture(Tile, Tile) override;
    void setPosition(Tile) override;
};

#endif // BISHOP_H