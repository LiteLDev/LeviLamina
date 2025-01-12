#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkbd3e11;
    ::ll::UntypedStorage<8, 24>  mUnk9bcf7e;
    ::ll::UntypedStorage<4, 12>  mUnk7fe223;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&);
    ItemStopUseOnEvent(ItemStopUseOnEvent const&);
    ItemStopUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemStopUseOnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
