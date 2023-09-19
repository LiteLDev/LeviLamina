#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkSettingOptions {
public:
    // prevent constructor by default
    NetworkSettingOptions& operator=(NetworkSettingOptions const&);
    NetworkSettingOptions(NetworkSettingOptions const&);
    NetworkSettingOptions();
};
