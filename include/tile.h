#ifndef TILE_H
#define TILE_H

#include "attributes.h"
#include "piece.h"

struct Tile {
    Position pos;
    bool isBlack;
    bool isWhite;
    bool hasPiece;
    Piece currentPiece;
};

#endif // TILE_H