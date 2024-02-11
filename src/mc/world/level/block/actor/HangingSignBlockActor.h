#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/SignBlockActor.h"

class HangingSignBlockActor : public ::SignBlockActor {
public:
    // prevent constructor by default
    HangingSignBlockActor& operator=(HangingSignBlockActor const&);
    HangingSignBlockActor(HangingSignBlockActor const&);
    HangingSignBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HangingSignBlockActor@@UEAA@XZ
    virtual ~HangingSignBlockActor() = default;

    // vIndex: 19, symbol: ?getShadowRadius@HangingSignBlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource&) const;

    // NOLINTEND
};
