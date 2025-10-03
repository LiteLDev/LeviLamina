#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSProxyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf991c7;
    ::ll::UntypedStorage<8, 16> mUnk7a0f65;
    ::ll::UntypedStorage<1, 1>  mUnk89f4ee;
    ::ll::UntypedStorage<1, 1>  mUnk17390f;
    // NOLINTEND

public:
    // prevent constructor by default
    JSProxyData& operator=(JSProxyData const&);
    JSProxyData(JSProxyData const&);
    JSProxyData();
};
