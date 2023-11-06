#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class TimerActorFlagBaseDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    TimerActorFlagBaseDefinition& operator=(TimerActorFlagBaseDefinition const&);
    TimerActorFlagBaseDefinition(TimerActorFlagBaseDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TimerActorFlagBaseDefinition@@UEAA@XZ
    virtual ~TimerActorFlagBaseDefinition();

    // symbol: ??0TimerActorFlagBaseDefinition@@QEAA@XZ
    MCAPI TimerActorFlagBaseDefinition();

    // symbol: ?initialize@TimerActorFlagBaseDefinition@@QEBAXAEAVEntityContext@@AEAVTimerActorFlagBaseGoal@@@Z
    MCAPI void initialize(class EntityContext&, class TimerActorFlagBaseGoal&) const;

    // NOLINTEND
};
