#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorExchangeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERARMOREXCHANGEEVENT
public:
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&) = delete;
    PlayerArmorExchangeEvent()                                           = delete;
#endif

public:
    /**
     * @symbol ??0PlayerArmorExchangeEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerArmorExchangeEvent(struct PlayerArmorExchangeEvent const&);
    /**
     * @symbol ??1PlayerArmorExchangeEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerArmorExchangeEvent();
};
