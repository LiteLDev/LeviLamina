#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSMallocState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd30436;
    ::ll::UntypedStorage<8, 8> mUnkcaec2a;
    ::ll::UntypedStorage<8, 8> mUnk87aff0;
    ::ll::UntypedStorage<8, 8> mUnkf7cc97;
    // NOLINTEND

public:
    // prevent constructor by default
    JSMallocState& operator=(JSMallocState const&);
    JSMallocState(JSMallocState const&);
    JSMallocState();
};
