#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDID
public:
    PlayerScoreboardId& operator=(PlayerScoreboardId const&) = delete;
    PlayerScoreboardId(PlayerScoreboardId const&)            = delete;
#endif

public:
    /**
     * @symbol ??0PlayerScoreboardId\@\@QEAA\@XZ
     */
    MCAPI PlayerScoreboardId();
    /**
     * @symbol ??0PlayerScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI PlayerScoreboardId(__int64);
    /**
     * @symbol ?INVALID\@PlayerScoreboardId\@\@2U1\@B
     */
    MCAPI static struct PlayerScoreboardId const INVALID;
};
