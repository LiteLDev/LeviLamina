#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk432ae9;
    ::ll::UntypedStorage<8, 24>  mUnkfa4327;
    ::ll::UntypedStorage<8, 152> mUnkc6abd9;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&);
    PlayerInteractEvent(PlayerInteractEvent const&);
    PlayerInteractEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerInteractEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
