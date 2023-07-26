#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAppConfigData {

public:
    // prevent constructor by default
    IAppConfigData& operator=(IAppConfigData const&) = delete;
    IAppConfigData(IAppConfigData const&)            = delete;
    IAppConfigData()                                 = delete;
};
