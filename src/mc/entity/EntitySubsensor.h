#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySubsensor {
public:
    // prevent constructor by default
    EntitySubsensor& operator=(EntitySubsensor const&);
    EntitySubsensor(EntitySubsensor const&);
    EntitySubsensor();

public:
    // NOLINTBEGIN
    // symbol: ??0EntitySubsensor@@QEAA@$$QEAV0@@Z
    MCAPI EntitySubsensor(class EntitySubsensor&&);

    // symbol:
    // ?senseEntities@EntitySubsensor@@QEAAXAEAVActor@@AEBV?$span@V?$not_null@PEAVActor@@@gsl@@$0?0@gsl@@AEBUTick@@_N3@Z
    MCAPI void
    senseEntities(class Actor&, gsl::span<gsl::not_null<class Actor*>> const&, struct Tick const&, bool, bool);

    // symbol: ??1EntitySubsensor@@QEAA@XZ
    MCAPI ~EntitySubsensor();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?NO_MAX_COUNT@EntitySubsensor@@0HB
    MCAPI static int const NO_MAX_COUNT;

    // NOLINTEND
};
