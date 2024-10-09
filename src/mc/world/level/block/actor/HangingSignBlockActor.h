#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/SignBlockActor.h"

class HangingSignBlockActor : public ::SignBlockActor {
public:
    // prevent constructor by default
    HangingSignBlockActor& operator=(HangingSignBlockActor const&);
    HangingSignBlockActor(HangingSignBlockActor const&);
    HangingSignBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HangingSignBlockActor() = default;

    // vIndex: 19
    virtual float getShadowRadius(class BlockSource&) const;

    MCAPI explicit HangingSignBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
