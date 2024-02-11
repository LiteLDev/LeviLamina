#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class DaylightDetectorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    DaylightDetectorBlockActor& operator=(DaylightDetectorBlockActor const&);
    DaylightDetectorBlockActor(DaylightDetectorBlockActor const&);
    DaylightDetectorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DaylightDetectorBlockActor@@UEAA@XZ
    virtual ~DaylightDetectorBlockActor() = default;

    // vIndex: 7, symbol: ?tick@DaylightDetectorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // NOLINTEND
};
