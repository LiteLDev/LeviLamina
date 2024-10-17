#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

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

    MCAPI void registerGameRules(class GameRules& gameRules);

    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler>&& handler);

    MCAPI void registerWithActorManagerEvents(class ActorManager& actorManager);

    MCAPI void registerWithGameplayUserManagerEvents(class GameplayUserManager& gameplayUserManager);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableLevelGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const& event);

    MCAPI void sendLevelInitialized(class Level& level);

    MCAPI void sendLevelRemovedActor(class Actor& actor);

    MCAPI void sendLevelTick(class Level& level);

    MCAPI void sendLevelTickStart(class Level& level);

    MCAPI void sendLevelWeatherChanged(
        std::string const& dimension,
        bool               wasRaining,
        bool               wasLightning,
        bool               isRaining,
        bool               isLightning
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
