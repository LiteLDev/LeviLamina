#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuiltInMobComponents {

public:
    // prevent constructor by default
    BuiltInMobComponents& operator=(BuiltInMobComponents const&) = delete;
    BuiltInMobComponents(BuiltInMobComponents const&)            = delete;
    BuiltInMobComponents()                                       = delete;
};
