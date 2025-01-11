#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class Player;
// clang-format on

class WardenSpawnTrackerSystem : public ::ITickingSystem, public ::LevelEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 2
    virtual ::EventResult onLevelAddedPlayer(::Player& player) /*override*/;

    // vIndex: 0
    virtual ~WardenSpawnTrackerSystem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);

    MCAPI ::EventResult $onLevelAddedPlayer(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLevelEventListener();

    MCAPI static void** $vftableForITickingSystem();
    // NOLINTEND
};
