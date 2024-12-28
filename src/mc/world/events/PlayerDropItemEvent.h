#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDropItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1ef927;
    ::ll::UntypedStorage<8, 24> mUnk972fa8;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDropItemEvent& operator=(PlayerDropItemEvent const&);
    PlayerDropItemEvent(PlayerDropItemEvent const&);
    PlayerDropItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDropItemEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
