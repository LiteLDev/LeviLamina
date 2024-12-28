#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddLevelEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc23191;
    ::ll::UntypedStorage<4, 4>  mUnk35133c;
    ::ll::UntypedStorage<4, 4>  mUnkefda39;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAddLevelEvent& operator=(PlayerAddLevelEvent const&);
    PlayerAddLevelEvent(PlayerAddLevelEvent const&);
    PlayerAddLevelEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerAddLevelEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
