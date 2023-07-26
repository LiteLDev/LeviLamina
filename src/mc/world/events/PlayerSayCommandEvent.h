#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSayCommandEvent {

public:
    // prevent constructor by default
    PlayerSayCommandEvent& operator=(PlayerSayCommandEvent const&) = delete;
    PlayerSayCommandEvent(PlayerSayCommandEvent const&)            = delete;
    PlayerSayCommandEvent()                                        = delete;

public:
    /**
     * @symbol ??1PlayerSayCommandEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerSayCommandEvent(); // NOLINT
};
