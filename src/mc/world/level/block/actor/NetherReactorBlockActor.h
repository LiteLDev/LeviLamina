#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class NetherReactorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    NetherReactorBlockActor& operator=(NetherReactorBlockActor const&);
    NetherReactorBlockActor(NetherReactorBlockActor const&);
    NetherReactorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherReactorBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    MCAPI explicit NetherReactorBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
