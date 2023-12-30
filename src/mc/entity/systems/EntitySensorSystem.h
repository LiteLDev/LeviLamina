#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class EntitySensorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EntitySensorSystem& operator=(EntitySensorSystem const&);
    EntitySensorSystem(EntitySensorSystem const&);
    EntitySensorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EntitySensorSystem@@UEAA@XZ
    virtual ~EntitySensorSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@EntitySensorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
