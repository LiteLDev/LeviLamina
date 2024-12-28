#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class AppConfigData {
public:
    // prevent constructor by default
    AppConfigData& operator=(AppConfigData const&);
    AppConfigData(AppConfigData const&);
    AppConfigData();
};
