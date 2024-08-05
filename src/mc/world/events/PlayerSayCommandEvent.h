#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSayCommandEvent {
public:
    // prevent constructor by default
    PlayerSayCommandEvent& operator=(PlayerSayCommandEvent const&);
    PlayerSayCommandEvent(PlayerSayCommandEvent const&);
    PlayerSayCommandEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerSayCommandEvent();

    // NOLINTEND
};
