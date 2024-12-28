#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkacc1d0;
    ::ll::UntypedStorage<8, 24>  mUnkb2f95c;
    ::ll::UntypedStorage<1, 1>   mUnkf53236;
    ::ll::UntypedStorage<4, 12>  mUnk957924;
    ::ll::UntypedStorage<4, 12>  mUnkedea33;
    ::ll::UntypedStorage<1, 1>   mUnk7736a1;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemUseOnEvent& operator=(ItemUseOnEvent const&);
    ItemUseOnEvent(ItemUseOnEvent const&);
    ItemUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemUseOnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
