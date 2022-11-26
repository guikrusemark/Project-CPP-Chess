#ifndef _BISHOP_H_
#define _BISHOP_H_

#include "chess-component/piece.h"

class Bishop final : public Piece {
    public:
        Bishop(bool white);

        void move(uint8_t side) override;
};

#endif // _BISHOP_H_