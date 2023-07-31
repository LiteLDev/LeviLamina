#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {

public:
    // prevent constructor by default
    PlayerScoreboardId& operator=(PlayerScoreboardId const&) = delete;
    PlayerScoreboardId(PlayerScoreboardId const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PlayerScoreboardId\@\@QEAA\@XZ
     */
    MCAPI PlayerScoreboardId();
    /**
     * @symbol ??0PlayerScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI PlayerScoreboardId(int64_t);
    /**
     * @symbol ?INVALID\@PlayerScoreboardId\@\@2U1\@B
     */
    MCAPI static struct PlayerScoreboardId const INVALID;
    // NOLINTEND
};
