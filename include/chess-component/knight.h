/**
 * @file knight.h
 * @author
 * @brief KNIGHT type class.
 *
 */

#ifndef CHESSCOMPONENT_KGNIGHT_H_
#define CHESSCOMPONENT_KGNIGHT_H_

#include "chess-component/piece.h"

class Knight final : public Piece {
    public:
        Knight(bool white, int row, int column);

        void move(int side) override;
};

#endif // CHESSCOMPONENT_KGNIGHT_H_