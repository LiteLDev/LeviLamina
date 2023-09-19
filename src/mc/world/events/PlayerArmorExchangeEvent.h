#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorExchangeEvent {
public:
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&);
    PlayerArmorExchangeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerArmorExchangeEvent@@QEAA@AEBU0@@Z
    MCAPI PlayerArmorExchangeEvent(struct PlayerArmorExchangeEvent const&);

    // symbol: ??1PlayerArmorExchangeEvent@@QEAA@XZ
    MCAPI ~PlayerArmorExchangeEvent();

    // NOLINTEND
};
