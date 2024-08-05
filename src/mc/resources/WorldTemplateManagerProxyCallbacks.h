#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateManagerProxyCallbacks {
public:
    // prevent constructor by default
    WorldTemplateManagerProxyCallbacks& operator=(WorldTemplateManagerProxyCallbacks const&);
    WorldTemplateManagerProxyCallbacks(WorldTemplateManagerProxyCallbacks const&);
    WorldTemplateManagerProxyCallbacks();

public:
    // NOLINTBEGIN
    MCAPI ~WorldTemplateManagerProxyCallbacks();

    // NOLINTEND
};
