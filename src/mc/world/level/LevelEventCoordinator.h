#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/LevelGameplayEvent.h"
#include "mc/events/MutableLevelGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class LevelEventCoordinator {
public:
    // prevent constructor by default
    LevelEventCoordinator& operator=(LevelEventCoordinator const&);
    LevelEventCoordinator(LevelEventCoordinator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventCoordinator();

    MCAPI LevelEventCoordinator();

    MCAPI class LevelGameplayHandler& getLevelGameplayHandler();

    MCAPI void registerGameRules(class GameRules&);

    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler>&& handler);

    MCAPI void registerWithActorManagerEvents(class ActorManager&);

    MCAPI void registerWithGameplayUserManagerEvents(class GameplayUserManager&);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableLevelGameplayEvent<::CoordinatorResult>>);

    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const& event);

    MCAPI void sendLevelInitialized(class Level& level);

    MCAPI void sendLevelRemovedActor(class Actor&);

    MCAPI void sendLevelTick(class Level& level);

    MCAPI void sendLevelTickStart(class Level& level);

    MCAPI void sendLevelWeatherChanged(std::string const&, bool, bool, bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(class EntityContext&);

    // NOLINTEND
};
