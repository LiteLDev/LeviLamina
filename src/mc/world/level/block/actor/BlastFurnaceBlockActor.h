#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class BlastFurnaceBlockActor : public ::FurnaceBlockActor {
public:
    // prevent constructor by default
    BlastFurnaceBlockActor& operator=(BlastFurnaceBlockActor const&);
    BlastFurnaceBlockActor(BlastFurnaceBlockActor const&);
    BlastFurnaceBlockActor();

public:
    // NOLINTBEGIN
    // symbol: ?getName@BlastFurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ??0BlastFurnaceBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit BlastFurnaceBlockActor(class BlockPos const& blockPos);

    // NOLINTEND
};
