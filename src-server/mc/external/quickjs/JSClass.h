#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSClass {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4243be;
    ::ll::UntypedStorage<4, 4> mUnk15e159;
    ::ll::UntypedStorage<8, 8> mUnk560cca;
    ::ll::UntypedStorage<8, 8> mUnk93e893;
    ::ll::UntypedStorage<8, 8> mUnk2f1c87;
    ::ll::UntypedStorage<8, 8> mUnkaa3084;
    // NOLINTEND

public:
    // prevent constructor by default
    JSClass& operator=(JSClass const&);
    JSClass(JSClass const&);
    JSClass();
};
