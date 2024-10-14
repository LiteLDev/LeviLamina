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
    MCAPI explicit TickDeltaTimeManager(std::unique_ptr<class ITickDeltaTimeManagerProxy> tickDeltaTimeManagerProxy);

    MCAPI void captureDeltaTime();

    MCAPI double getTickDeltaTime() const;

    MCAPI ~TickDeltaTimeManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
