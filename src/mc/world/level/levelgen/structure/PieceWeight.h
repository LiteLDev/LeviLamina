#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PieceWeight {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PIECEWEIGHT
public:
    PieceWeight& operator=(PieceWeight const&) = delete;
    PieceWeight(PieceWeight const&)            = delete;
    PieceWeight()                              = delete;
#endif

public:
    /**
     * @symbol ??1PieceWeight\@\@QEAA\@XZ
     */
    MCAPI ~PieceWeight();
};
