#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDropItemEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDROPITEMEVENT
public:
    PlayerDropItemEvent& operator=(PlayerDropItemEvent const&) = delete;
    PlayerDropItemEvent(PlayerDropItemEvent const&)            = delete;
    PlayerDropItemEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??1PlayerDropItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDropItemEvent();
};
