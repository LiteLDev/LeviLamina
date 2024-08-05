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
    // vIndex: 0
    virtual ~DaylightDetectorBlockActor() = default;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // NOLINTEND
};
