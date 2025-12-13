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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLevelEventListener();

    MCNAPI static void** $vftableForITickingSystem();
    // NOLINTEND
};
