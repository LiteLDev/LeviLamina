#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PieceWeight {

public:
    // prevent constructor by default
    PieceWeight& operator=(PieceWeight const&) = delete;
    PieceWeight(PieceWeight const&)            = delete;
    PieceWeight()                              = delete;

public:
    /**
     * @symbol ??1PieceWeight\@\@QEAA\@XZ
     */
    MCAPI ~PieceWeight(); // NOLINT
};
