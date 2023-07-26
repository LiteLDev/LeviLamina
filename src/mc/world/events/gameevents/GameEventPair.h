#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventPair {

public:
    // prevent constructor by default
    GameEventPair& operator=(GameEventPair const&) = delete;
    GameEventPair(GameEventPair const&)            = delete;
    GameEventPair()                                = delete;

public:
    /**
     * @symbol ??1GameEventPair\@\@QEAA\@XZ
     */
    MCAPI ~GameEventPair(); // NOLINT
};
