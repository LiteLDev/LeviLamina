#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerDeathManagerProxy {

public:
    // prevent constructor by default
    IPlayerDeathManagerProxy& operator=(IPlayerDeathManagerProxy const&) = delete;
    IPlayerDeathManagerProxy(IPlayerDeathManagerProxy const&)            = delete;
    IPlayerDeathManagerProxy()                                           = delete;
};
