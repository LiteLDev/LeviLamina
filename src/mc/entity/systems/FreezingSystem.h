#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class FreezingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    FreezingSystem& operator=(FreezingSystem const&);
    FreezingSystem(FreezingSystem const&);
    FreezingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FreezingSystem@@UEAA@XZ
    virtual ~FreezingSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@FreezingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol: ?FREEZE_EFFECT_UUID@FreezingSystem@@2VUUID@mce@@B
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID;

    // symbol: ?VULNERABLE_MOB_FREEZE_DAMAGE@FreezingSystem@@2HB
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE;

    // NOLINTEND
};
