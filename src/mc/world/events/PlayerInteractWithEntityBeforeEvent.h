#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk41fb69;
    ::ll::UntypedStorage<8, 24>  mUnk6a2c95;
    ::ll::UntypedStorage<8, 152> mUnk7e899b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithEntityBeforeEvent& operator=(PlayerInteractWithEntityBeforeEvent const&);
    PlayerInteractWithEntityBeforeEvent(PlayerInteractWithEntityBeforeEvent const&);
    PlayerInteractWithEntityBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInteractWithEntityBeforeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
