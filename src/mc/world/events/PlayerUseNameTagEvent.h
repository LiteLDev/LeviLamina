#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUseNameTagEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk21cc41;
    ::ll::UntypedStorage<8, 152> mUnk97b7ce;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUseNameTagEvent& operator=(PlayerUseNameTagEvent const&);
    PlayerUseNameTagEvent(PlayerUseNameTagEvent const&);
    PlayerUseNameTagEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerUseNameTagEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
