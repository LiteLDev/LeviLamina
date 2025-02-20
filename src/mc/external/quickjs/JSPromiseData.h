#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSPromiseData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkab2e68;
    ::ll::UntypedStorage<8, 32> mUnk6b5924;
    ::ll::UntypedStorage<4, 4>  mUnka926ee;
    ::ll::UntypedStorage<8, 16> mUnk6465ea;
    // NOLINTEND

public:
    // prevent constructor by default
    JSPromiseData& operator=(JSPromiseData const&);
    JSPromiseData(JSPromiseData const&);
    JSPromiseData();
};
