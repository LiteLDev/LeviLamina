#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/SystemInfo.h"

struct InternalSystemInfo : public ::SystemInfo {
public:
    // prevent constructor by default
    InternalSystemInfo& operator=(InternalSystemInfo const&);
    InternalSystemInfo(InternalSystemInfo const&);
    InternalSystemInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InternalSystemInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
