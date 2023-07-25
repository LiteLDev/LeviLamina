#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAppConfigData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IAPPCONFIGDATA
public:
    IAppConfigData& operator=(IAppConfigData const&) = delete;
    IAppConfigData(IAppConfigData const&)            = delete;
    IAppConfigData()                                 = delete;
#endif

public:
};
