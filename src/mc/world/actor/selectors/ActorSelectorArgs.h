#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSelectorArgs {
public:
    // NOLINTBEGIN
    // symbol: ??0ActorSelectorArgs@@QEAA@XZ
    MCAPI ActorSelectorArgs();

    // symbol: ??0ActorSelectorArgs@@QEAA@$$QEAU0@@Z
    MCAPI ActorSelectorArgs(struct ActorSelectorArgs&&);

    // symbol: ??0ActorSelectorArgs@@QEAA@AEBU0@@Z
    MCAPI ActorSelectorArgs(struct ActorSelectorArgs const&);

    // symbol: ??4ActorSelectorArgs@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ActorSelectorArgs& operator=(struct ActorSelectorArgs&&);

    // symbol: ??4ActorSelectorArgs@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ActorSelectorArgs& operator=(struct ActorSelectorArgs const&);

    // symbol: ??1ActorSelectorArgs@@QEAA@XZ
    MCAPI ~ActorSelectorArgs();

    // symbol: ?DEFAULT_LEVEL@ActorSelectorArgs@@2U?$pair@HH@std@@B
    MCAPI static std::pair<int, int> const DEFAULT_LEVEL;

    // symbol: ?DEFAULT_X_ROTATION@ActorSelectorArgs@@2U?$pair@MM@std@@B
    MCAPI static std::pair<float, float> const DEFAULT_X_ROTATION;

    // symbol: ?DEFAULT_Y_ROTATION@ActorSelectorArgs@@2U?$pair@MM@std@@B
    MCAPI static std::pair<float, float> const DEFAULT_Y_ROTATION;

    // NOLINTEND
};
