#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk51d750;
    ::ll::UntypedStorage<8, 32> mUnk5ee99e;
    ::ll::UntypedStorage<8, 32> mUnk1e5cb0;
    ::ll::UntypedStorage<8, 32> mUnk6c5834;
    ::ll::UntypedStorage<4, 4>  mUnkcb4e4e;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonData& operator=(ButtonData const&);
    ButtonData(ButtonData const&);
    ButtonData();
};
