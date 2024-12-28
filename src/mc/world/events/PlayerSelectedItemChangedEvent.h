#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSelectedItemChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk858bdf;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSelectedItemChangedEvent& operator=(PlayerSelectedItemChangedEvent const&);
    PlayerSelectedItemChangedEvent(PlayerSelectedItemChangedEvent const&);
    PlayerSelectedItemChangedEvent();
};
