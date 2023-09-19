#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAppConfigData {
public:
    // prevent constructor by default
    IAppConfigData& operator=(IAppConfigData const&);
    IAppConfigData(IAppConfigData const&);
    IAppConfigData();
};
