#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorExchangeEvent {

public:
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&) = delete;
    PlayerArmorExchangeEvent()                                           = delete;

public:
    /**
     * @symbol ??0PlayerArmorExchangeEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerArmorExchangeEvent(struct PlayerArmorExchangeEvent const&); // NOLINT
    /**
     * @symbol ??1PlayerArmorExchangeEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerArmorExchangeEvent(); // NOLINT
};
