#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/level/storage/RealmEventId.h"

class RealmsStoriesGameplayEventListener {
public:
    // prevent constructor by default
    RealmsStoriesGameplayEventListener& operator=(RealmsStoriesGameplayEventListener const&);
    RealmsStoriesGameplayEventListener(RealmsStoriesGameplayEventListener const&);
    RealmsStoriesGameplayEventListener();

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onEvent(struct ActorKilledEvent const& actorKilledEvent);

    MCVAPI ::EventResult onEvent(struct ActorAcquiredItemEvent const& actorAcquiredItemEvent);

    MCVAPI ::EventResult onPlayerMove(class Player& player);

    MCVAPI ::EventResult onPlayerPortalBuilt(class Player& player, DimensionType);

    MCVAPI ::EventResult
    onPlayerPortalUsed(class Player& player, DimensionType fromDimension, DimensionType toDimension);

    MCVAPI ::EventResult onPlayerPoweredBeacon(class Player const& player, int);

    MCAPI explicit RealmsStoriesGameplayEventListener(class LevelStorage& levelStorage);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _handlePillagerKilledEvent(class Actor const& killedActor, struct ActorKilledEvent const& actorKilledEvent);

    MCAPI void _publishEventForRealmsService(::RealmEventId id, std::string const& xuid);

    MCAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId id, class Player const& player);

    MCAPI void
    _publishWorldEventFirstOrOtherTime(::RealmEventId firstTimeId, ::RealmEventId otherTimeId, std::string const& xuid);

    MCAPI static std::set<std::string> _getXuidsInKillProximity(class Actor const& killedActor, float xz, float y);

    MCAPI static std::string _playerXuidsToString(std::set<std::string> const& xuids);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForEventListenerDispatcherActorEventListener();

    MCAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::EventResult onEvent$(struct ActorKilledEvent const& actorKilledEvent);

    MCAPI ::EventResult onEvent$(struct ActorAcquiredItemEvent const& actorAcquiredItemEvent);

    MCAPI ::EventResult onPlayerMove$(class Player& player);

    MCAPI ::EventResult onPlayerPortalBuilt$(class Player& player, DimensionType);

    MCAPI ::EventResult
    onPlayerPortalUsed$(class Player& player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI ::EventResult onPlayerPoweredBeacon$(class Player const& player, int);

    // NOLINTEND
};
