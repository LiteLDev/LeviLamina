#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSAsyncFunctionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9e3e68;
    ::ll::UntypedStorage<8, 16> mUnk901330;
    ::ll::UntypedStorage<4, 4> mUnk924ec7;
    ::ll::UntypedStorage<4, 4> mUnk46b426;
    ::ll::UntypedStorage<4, 4> mUnk33af21;
    ::ll::UntypedStorage<8, 32> mUnk202ea5;
    ::ll::UntypedStorage<8, 80> mUnk7ac1b9;
    // NOLINTEND

public:
    // prevent constructor by default
    JSAsyncFunctionState& operator=(JSAsyncFunctionState const&);
    JSAsyncFunctionState(JSAsyncFunctionState const&);
    JSAsyncFunctionState();

};
