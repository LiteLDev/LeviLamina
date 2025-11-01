#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSBigFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc08ef8;
    ::ll::UntypedStorage<8, 32> mUnkbf4f01;
    // NOLINTEND

public:
    // prevent constructor by default
    JSBigFloat& operator=(JSBigFloat const&);
    JSBigFloat(JSBigFloat const&);
    JSBigFloat();

};
