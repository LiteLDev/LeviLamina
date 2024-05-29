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
    // symbol:
    // ??0TickDeltaTimeManager@@QEAA@V?$unique_ptr@VITickDeltaTimeManagerProxy@@U?$default_delete@VITickDeltaTimeManagerProxy@@@std@@@std@@@Z
    MCAPI explicit TickDeltaTimeManager(std::unique_ptr<class ITickDeltaTimeManagerProxy>);

    // symbol: ?captureDeltaTime@TickDeltaTimeManager@@QEAAXXZ
    MCAPI void captureDeltaTime();

    // symbol: ?getTickDeltaTime@TickDeltaTimeManager@@QEBANXZ
    MCAPI double getTickDeltaTime() const;

    // symbol: ??1TickDeltaTimeManager@@QEAA@XZ
    MCAPI ~TickDeltaTimeManager();

    // NOLINTEND
};
