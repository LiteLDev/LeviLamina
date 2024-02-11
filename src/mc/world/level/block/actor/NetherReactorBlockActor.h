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
    // vIndex: 0, symbol: __gen_??1NetherReactorBlockActor@@UEAA@XZ
    virtual ~NetherReactorBlockActor() = default;

    // vIndex: 1, symbol: ?load@NetherReactorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@NetherReactorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // NOLINTEND
};
