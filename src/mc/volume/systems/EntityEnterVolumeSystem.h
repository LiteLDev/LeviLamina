#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

class EntityEnterVolumeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EntityEnterVolumeSystem& operator=(EntityEnterVolumeSystem const&);
    EntityEnterVolumeSystem(EntityEnterVolumeSystem const&);
    EntityEnterVolumeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityEnterVolumeSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI explicit EntityEnterVolumeSystem(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tick(class EntityContext& entity, class VolumeBoundsComponent& bounds) const;

    // NOLINTEND
};
