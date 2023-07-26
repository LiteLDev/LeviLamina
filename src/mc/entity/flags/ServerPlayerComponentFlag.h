#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerComponentFlag {

public:
    // prevent constructor by default
    ServerPlayerComponentFlag& operator=(ServerPlayerComponentFlag const&) = delete;
    ServerPlayerComponentFlag(ServerPlayerComponentFlag const&)            = delete;
    ServerPlayerComponentFlag()                                            = delete;
};
