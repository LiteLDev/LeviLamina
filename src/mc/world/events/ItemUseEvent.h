#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkf71053;
    ::ll::UntypedStorage<8, 24>  mUnk2d3062;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUseEvent& operator=(ItemUseEvent const&);
    ItemUseEvent(ItemUseEvent const&);
    ItemUseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemUseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
