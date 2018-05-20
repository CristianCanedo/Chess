#ifndef BOARD_H
#define BOARD_H

class Board {
    private:
    char* _board;

    public:
    Board();
    ~Board();

    void drawBoard();
    void updateBoard();
};

#endif // BOARD_H