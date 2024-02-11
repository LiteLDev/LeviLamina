#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class EndPortalBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    EndPortalBlockActor& operator=(EndPortalBlockActor const&);
    EndPortalBlockActor(EndPortalBlockActor const&);
    EndPortalBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EndPortalBlockActor@@UEAA@XZ
    virtual ~EndPortalBlockActor() = default;

    // symbol: ??0EndPortalBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit EndPortalBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
