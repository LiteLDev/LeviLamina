#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSelectorArgs {
public:
    // prevent constructor by default
    ActorSelectorArgs& operator=(ActorSelectorArgs const&);
    ActorSelectorArgs(ActorSelectorArgs const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActorSelectorArgs@@QEAA@XZ
    MCAPI ActorSelectorArgs();

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
