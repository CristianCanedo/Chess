#ifndef PAWN_H
#define PAWN_H

#include "position.h"
#include "piece.h"
#include "tile.h"

class Pawn : Piece {
    
    private:
    Color _color;
    Position _pos;
    bool isCaptured;
    bool isFirstMove;
    bool enPassantActive;

    public:
    Pawn();
    ~Pawn();

    void moveTo(Tile) override;
    void canMove(Tile) override;
    void capture(Tile) override;
    bool canCapture(Tile, Tile) override;

    void setPosition(Tile) override;
    Position getPosition() override;
    void setCapturedStatus(bool);
    bool getCapturedStatus();
    void setFirstMoveStatus(bool);
    bool getFirstMoveStatus();
    void setEnPassantStatus(bool);
    bool getEnPassantStatus();

    bool isEnPassantCapture(Tile);
    void canCaptureEnPassant(Tile);
    
    void checkFirstMove();
};

#endif // PAWN_H