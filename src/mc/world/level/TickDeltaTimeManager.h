#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickDeltaTimeManager {
public:
    // prevent constructor by default
    TickDeltaTimeManager& operator=(TickDeltaTimeManager const&);
    TickDeltaTimeManager(TickDeltaTimeManager const&);
    TickDeltaTimeManager();

public:
    // NOLINTBEGIN
    MCAPI explicit TickDeltaTimeManager(std::unique_ptr<class ITickDeltaTimeManagerProxy>);

    MCAPI void captureDeltaTime();

    MCAPI double getTickDeltaTime() const;

    MCAPI ~TickDeltaTimeManager();

    // NOLINTEND
};
