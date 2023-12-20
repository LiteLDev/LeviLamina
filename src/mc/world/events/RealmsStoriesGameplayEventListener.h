#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/RealmsEventId.h"

class RealmsStoriesGameplayEventListener {
public:
    // prevent constructor by default
    RealmsStoriesGameplayEventListener& operator=(RealmsStoriesGameplayEventListener const&);
    RealmsStoriesGameplayEventListener(RealmsStoriesGameplayEventListener const&);
    RealmsStoriesGameplayEventListener();

public:
    // NOLINTBEGIN
    // symbol: ?onEvent@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorKilledEvent@@@Z
    MCVAPI ::EventResult onEvent(struct ActorKilledEvent const&);

    // symbol: ?onEvent@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorAcquiredItemEvent@@@Z
    MCVAPI ::EventResult onEvent(struct ActorAcquiredItemEvent const&);

    // symbol: ?onPlayerMove@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerMove(class Player&);

    // symbol: ??0RealmsStoriesGameplayEventListener@@QEAA@AEAVLevelStorage@@@Z
    MCAPI explicit RealmsStoriesGameplayEventListener(class LevelStorage&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_publishLocationWorldEventIfFirstTime@RealmsStoriesGameplayEventListener@@AEAAXW4RealmsEventId@@AEBVPlayer@@@Z
    MCAPI void _publishLocationWorldEventIfFirstTime(::RealmsEventId, class Player const&);

    // NOLINTEND
};
