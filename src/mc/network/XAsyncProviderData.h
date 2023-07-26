#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XAsyncProviderData {

public:
    // prevent constructor by default
    XAsyncProviderData& operator=(XAsyncProviderData const&) = delete;
    XAsyncProviderData(XAsyncProviderData const&)            = delete;
    XAsyncProviderData()                                     = delete;
};
