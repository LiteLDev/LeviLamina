#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

class EntityExitVolumeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EntityExitVolumeSystem& operator=(EntityExitVolumeSystem const&);
    EntityExitVolumeSystem(EntityExitVolumeSystem const&);
    EntityExitVolumeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityExitVolumeSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI explicit EntityExitVolumeSystem(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tick(
        class EntityContext&                 entity,
        class VolumeBoundsComponent&         bounds,
        class EntitiesInsideVolumeComponent& entitiesInsideVolume
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(class EntityRegistry& registry, class EntityContext& entity);

    MCAPI void singleTick$(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI void tick$(class EntityRegistry& registry);

    // NOLINTEND
};
