#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkPermissions {

public:
    // prevent constructor by default
    NetworkPermissions& operator=(NetworkPermissions const&) = delete;
    NetworkPermissions(NetworkPermissions const&)            = delete;
    NetworkPermissions()                                     = delete;
};
