#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class SaveSurroundingChunksSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    SaveSurroundingChunksSystem& operator=(SaveSurroundingChunksSystem const&);
    SaveSurroundingChunksSystem(SaveSurroundingChunksSystem const&);
    SaveSurroundingChunksSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaveSurroundingChunksSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickSaveSurroundingChunks(class ActorOwnerComponent&);

    // NOLINTEND
};
