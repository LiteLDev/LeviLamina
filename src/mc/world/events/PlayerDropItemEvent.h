#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDropItemEvent {

public:
    // prevent constructor by default
    PlayerDropItemEvent& operator=(PlayerDropItemEvent const&) = delete;
    PlayerDropItemEvent(PlayerDropItemEvent const&)            = delete;
    PlayerDropItemEvent()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1PlayerDropItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDropItemEvent();
    // NOLINTEND
};
