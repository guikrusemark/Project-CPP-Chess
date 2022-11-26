#ifndef _PAWN_H_
#define _PAWN_H_

#include "piece.h"

class Pawn final : public Piece {
    public:
        Pawn(bool white);

        void move(uint8_t side) override;
};

#endif // _PAWN_H_