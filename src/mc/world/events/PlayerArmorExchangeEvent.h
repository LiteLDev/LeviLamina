#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorExchangeEvent {
public:
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&);
    PlayerArmorExchangeEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerArmorExchangeEvent(struct PlayerArmorExchangeEvent const&);

    MCAPI ~PlayerArmorExchangeEvent();

    // NOLINTEND
};
