#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSayCommandEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSAYCOMMANDEVENT
public:
    PlayerSayCommandEvent& operator=(PlayerSayCommandEvent const&) = delete;
    PlayerSayCommandEvent(PlayerSayCommandEvent const&)            = delete;
    PlayerSayCommandEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??1PlayerSayCommandEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerSayCommandEvent();
};
