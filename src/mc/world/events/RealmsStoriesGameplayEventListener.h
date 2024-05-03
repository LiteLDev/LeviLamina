#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/RealmEventId.h"

class RealmsStoriesGameplayEventListener {
public:
    // prevent constructor by default
    RealmsStoriesGameplayEventListener& operator=(RealmsStoriesGameplayEventListener const&);
    RealmsStoriesGameplayEventListener(RealmsStoriesGameplayEventListener const&);
    RealmsStoriesGameplayEventListener();

public:
    // NOLINTBEGIN
    // symbol: ?onEvent@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorAcquiredItemEvent@@@Z
    MCVAPI ::EventResult onEvent(struct ActorAcquiredItemEvent const&);

    // symbol: ?onEvent@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorKilledEvent@@@Z
    MCVAPI ::EventResult onEvent(struct ActorKilledEvent const&);

    // symbol: ?onPlayerMove@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerMove(class Player&);

    // symbol:
    // ?onPlayerPortalBuilt@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI ::EventResult onPlayerPortalBuilt(class Player&, DimensionType);

    // symbol:
    // ?onPlayerPortalUsed@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCVAPI ::EventResult onPlayerPortalUsed(class Player&, DimensionType, DimensionType);

    // symbol: ?onPlayerPoweredBeacon@RealmsStoriesGameplayEventListener@@UEAA?AW4EventResult@@AEBVPlayer@@H@Z
    MCVAPI ::EventResult onPlayerPoweredBeacon(class Player const&, int);

    // symbol: ??0RealmsStoriesGameplayEventListener@@QEAA@AEAVLevelStorage@@@Z
    MCAPI explicit RealmsStoriesGameplayEventListener(class LevelStorage&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handlePillagerKilledEvent@RealmsStoriesGameplayEventListener@@AEAAXAEBVActor@@AEBUActorKilledEvent@@@Z
    MCAPI void _handlePillagerKilledEvent(class Actor const&, struct ActorKilledEvent const&);

    // symbol:
    // ?_publishEventForRealmsService@RealmsStoriesGameplayEventListener@@AEAAXW4RealmEventId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _publishEventForRealmsService(::RealmEventId, std::string const&);

    // symbol:
    // ?_publishLocationWorldEventIfFirstTime@RealmsStoriesGameplayEventListener@@AEAAXW4RealmEventId@@AEBVPlayer@@@Z
    MCAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId, class Player const&);

    // symbol:
    // ?_publishWorldEventFirstOrOtherTime@RealmsStoriesGameplayEventListener@@AEAAXW4RealmEventId@@0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _publishWorldEventFirstOrOtherTime(::RealmEventId, ::RealmEventId, std::string const&);

    // symbol:
    // ?_getXuidsInKillProximity@RealmsStoriesGameplayEventListener@@CA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVActor@@MM@Z
    MCAPI static std::set<std::string> _getXuidsInKillProximity(class Actor const&, float, float);

    // symbol:
    // ?_playerXuidsToString@RealmsStoriesGameplayEventListener@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI static std::string _playerXuidsToString(std::set<std::string> const&);

    // NOLINTEND
};
