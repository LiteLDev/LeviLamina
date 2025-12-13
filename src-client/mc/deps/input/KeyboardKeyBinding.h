#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyboardKeyBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk483432;
    ::ll::UntypedStorage<4, 4>  mUnk658c84;
    ::ll::UntypedStorage<1, 1>  mUnk9b62cf;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyboardKeyBinding& operator=(KeyboardKeyBinding const&);
    KeyboardKeyBinding(KeyboardKeyBinding const&);
    KeyboardKeyBinding();
};
