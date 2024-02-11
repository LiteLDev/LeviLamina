#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class SmokerBlockActor : public ::FurnaceBlockActor {
public:
    // prevent constructor by default
    SmokerBlockActor& operator=(SmokerBlockActor const&);
    SmokerBlockActor(SmokerBlockActor const&);
    SmokerBlockActor();

public:
    // NOLINTBEGIN
    // symbol: ?getName@SmokerBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ??0SmokerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SmokerBlockActor(class BlockPos const& blockPos);

    // NOLINTEND
};
