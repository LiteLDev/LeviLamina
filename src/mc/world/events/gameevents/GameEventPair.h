#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventPair {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTPAIR
public:
    GameEventPair& operator=(GameEventPair const&) = delete;
    GameEventPair(GameEventPair const&)            = delete;
    GameEventPair()                                = delete;
#endif

public:
    /**
     * @symbol ??1GameEventPair\@\@QEAA\@XZ
     */
    MCAPI ~GameEventPair();
};
