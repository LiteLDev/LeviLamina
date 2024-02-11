#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateManagerProxy {
public:
    // prevent constructor by default
    WorldTemplateManagerProxy& operator=(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy();

public:
    // NOLINTBEGIN
    // symbol: ??0WorldTemplateManagerProxy@@QEAA@AEBUWorldTemplateManagerProxyCallbacks@@@Z
    MCAPI explicit WorldTemplateManagerProxy(struct WorldTemplateManagerProxyCallbacks const& callbacks);

    // symbol: ??1WorldTemplateManagerProxy@@QEAA@XZ
    MCAPI ~WorldTemplateManagerProxy();

    // NOLINTEND
};
