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
    MCVAPI ::EventResult onEvent(struct ActorKilledEvent const&);

    MCVAPI ::EventResult onEvent(struct ActorAcquiredItemEvent const&);

    MCVAPI ::EventResult onPlayerMove(class Player&);

    MCVAPI ::EventResult onPlayerPortalBuilt(class Player&, DimensionType);

    MCVAPI ::EventResult onPlayerPortalUsed(class Player&, DimensionType, DimensionType);

    MCVAPI ::EventResult onPlayerPoweredBeacon(class Player const&, int);

    MCAPI explicit RealmsStoriesGameplayEventListener(class LevelStorage&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _handlePillagerKilledEvent(class Actor const&, struct ActorKilledEvent const&);

    MCAPI void _publishEventForRealmsService(::RealmEventId, std::string const&);

    MCAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId, class Player const&);

    MCAPI void _publishWorldEventFirstOrOtherTime(::RealmEventId, ::RealmEventId, std::string const&);

    MCAPI static std::set<std::string> _getXuidsInKillProximity(class Actor const&, float, float);

    MCAPI static std::string _playerXuidsToString(std::set<std::string> const&);

    // NOLINTEND
};
