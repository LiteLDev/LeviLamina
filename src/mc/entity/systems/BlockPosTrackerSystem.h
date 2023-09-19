#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BlockPosTrackerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BlockPosTrackerSystem& operator=(BlockPosTrackerSystem const&);
    BlockPosTrackerSystem(BlockPosTrackerSystem const&);
    BlockPosTrackerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BlockPosTrackerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // symbol: ?_tickBlockPosTrackerComponent@BlockPosTrackerSystem@@SAXAEAVActor@@AEAVBlockPosTrackerComponent@@@Z
    MCAPI static void _tickBlockPosTrackerComponent(class Actor&, class BlockPosTrackerComponent&);

    // NOLINTEND
};
