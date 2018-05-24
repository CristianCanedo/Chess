#ifndef TILE_H
#define TILE_H

struct Tile {
    Position pos;
    Color color;
    bool hasPiece;
    Piece piece;
};

#endif // TILE_H