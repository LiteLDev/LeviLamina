#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/systems/ITickingSystem.h"

class EntityExitVolumeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EntityExitVolumeSystem& operator=(EntityExitVolumeSystem const&);
    EntityExitVolumeSystem(EntityExitVolumeSystem const&);
    EntityExitVolumeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EntityExitVolumeSystem@@UEAA@XZ
    virtual ~EntityExitVolumeSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@EntityExitVolumeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol: ??0EntityExitVolumeSystem@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit EntityExitVolumeSystem(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tick@EntityExitVolumeSystem@@AEBAXAEAVEntityContext@@AEAVVolumeBoundsComponent@@AEAVEntitiesInsideVolumeComponent@@@Z
    MCAPI void
    _tick(class EntityContext& entity, class VolumeBoundsComponent& bounds, class EntitiesInsideVolumeComponent&) const;

    // NOLINTEND
};
