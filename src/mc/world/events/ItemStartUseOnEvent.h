#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStartUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk47f7f3;
    ::ll::UntypedStorage<8, 24>  mUnk14b7b0;
    ::ll::UntypedStorage<1, 1>   mUnk22395b;
    ::ll::UntypedStorage<4, 12>  mUnkf5e599;
    ::ll::UntypedStorage<4, 12>  mUnk1bc442;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStartUseOnEvent& operator=(ItemStartUseOnEvent const&);
    ItemStartUseOnEvent(ItemStartUseOnEvent const&);
    ItemStartUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemStartUseOnEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
