#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BlockBreakSensorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BlockBreakSensorSystem& operator=(BlockBreakSensorSystem const&);
    BlockBreakSensorSystem(BlockBreakSensorSystem const&);
    BlockBreakSensorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockBreakSensorSystem@@UEAA@XZ
    virtual ~BlockBreakSensorSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BlockBreakSensorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
