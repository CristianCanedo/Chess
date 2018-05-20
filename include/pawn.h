#ifndef PAWN_H
#define PAWN_H

#include "position.h"
#include "piece.h"

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

    void moveTo(Position) override;
    void canMove(Position) override;
    void capture(PieceType) override;
    bool canCapture(PieceType, PieceType) override;
    void updatePosition(PieceType) override;
    void updateEnPassantStatus();
    bool isEnPassantCapture(PieceType, Position);
    void canCaptureEnPassant(PieceType, Position);
    void updateCapturedStatus();
    void checkFirstMove();
};

#endif // PAWN_H