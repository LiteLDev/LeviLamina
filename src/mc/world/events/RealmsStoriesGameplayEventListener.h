#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
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

    // symbol:
    // ?onPlayerPortalUsed@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCVAPI ::EventResult onPlayerPortalUsed(class Player&, DimensionType, DimensionType);

    // symbol: ??0RealmsStoriesGameplayEventListener@@QEAA@AEAVLevelStorage@@@Z
    MCAPI explicit RealmsStoriesGameplayEventListener(class LevelStorage&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handlePillagerKilledEvent@RealmsStoriesGameplayEventListener@@AEAAXAEBVActor@@AEBUActorKilledEvent@@@Z
    MCAPI void _handlePillagerKilledEvent(class Actor const&, struct ActorKilledEvent const&);

    // symbol:
    // ?_publishLocationWorldEventIfFirstTime@RealmsStoriesGameplayEventListener@@AEAAXW4RealmsEventId@@AEBVPlayer@@@Z
    MCAPI void _publishLocationWorldEventIfFirstTime(::RealmsEventId, class Player const&);

    // symbol:
    // ?_publishMobKilledEventForRealmsService@RealmsStoriesGameplayEventListener@@AEAAXW4RealmsEventId@@AEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void _publishMobKilledEventForRealmsService(::RealmsEventId, std::set<std::string> const&);

    // symbol:
    // ?_addXuidsInKillProximity@RealmsStoriesGameplayEventListener@@CAXAEBVActor@@MMAEAV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static void _addXuidsInKillProximity(class Actor const&, float, float, std::set<std::string>&);

    // NOLINTEND
};
