#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/systems/ITickingSystem.h"

class EntityEnterVolumeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EntityEnterVolumeSystem& operator=(EntityEnterVolumeSystem const&);
    EntityEnterVolumeSystem(EntityEnterVolumeSystem const&);
    EntityEnterVolumeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EntityEnterVolumeSystem@@UEAA@XZ
    virtual ~EntityEnterVolumeSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@EntityEnterVolumeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol: ??0EntityEnterVolumeSystem@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit EntityEnterVolumeSystem(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tick@EntityEnterVolumeSystem@@AEBAXAEAVEntityContext@@AEAVVolumeBoundsComponent@@@Z
    MCAPI void _tick(class EntityContext& entity, class VolumeBoundsComponent& bounds) const;

    // NOLINTEND
};
