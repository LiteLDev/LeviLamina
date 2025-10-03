#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSForInIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk37a105;
    ::ll::UntypedStorage<4, 4>  mUnk3143bd;
    ::ll::UntypedStorage<4, 4>  mUnk6d0dc1;
    ::ll::UntypedStorage<1, 1>  mUnk329e09;
    ::ll::UntypedStorage<1, 1>  mUnkee2bc0;
    ::ll::UntypedStorage<8, 8>  mUnk949c2d;
    // NOLINTEND

public:
    // prevent constructor by default
    JSForInIterator& operator=(JSForInIterator const&);
    JSForInIterator(JSForInIterator const&);
    JSForInIterator();
};
