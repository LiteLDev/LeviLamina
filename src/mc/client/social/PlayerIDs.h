#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayerIDs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_PLAYERIDS
public:
    PlayerIDs& operator=(PlayerIDs const&) = delete;
    PlayerIDs(PlayerIDs const&)            = delete;
    PlayerIDs()                            = delete;
#endif

public:
    /**
     * @symbol ??1PlayerIDs\@Social\@\@QEAA\@XZ
     */
    MCAPI ~PlayerIDs();
};

}; // namespace Social
