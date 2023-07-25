#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScore {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCORE
public:
    PlayerScore& operator=(PlayerScore const&) = delete;
    PlayerScore(PlayerScore const&)            = delete;
    PlayerScore()                              = delete;
#endif

public:
    /**
     * @symbol ?getId\@PlayerScore\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const& getId() const;
};
