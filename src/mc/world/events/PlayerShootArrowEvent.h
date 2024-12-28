#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerShootArrowEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk9afbaf;
    ::ll::UntypedStorage<8, 24>  mUnk2180cb;
    ::ll::UntypedStorage<8, 152> mUnk36d8f2;
    ::ll::UntypedStorage<8, 152> mUnk793b06;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerShootArrowEvent& operator=(PlayerShootArrowEvent const&);
    PlayerShootArrowEvent(PlayerShootArrowEvent const&);
    PlayerShootArrowEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerShootArrowEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
