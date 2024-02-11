#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class ComparatorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ComparatorBlockActor& operator=(ComparatorBlockActor const&);
    ComparatorBlockActor(ComparatorBlockActor const&);
    ComparatorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ComparatorBlockActor@@UEAA@XZ
    virtual ~ComparatorBlockActor() = default;

    // vIndex: 1, symbol: ?load@ComparatorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@ComparatorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@ComparatorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 43, symbol: ?getOutputSignal@ComparatorBlockActor@@UEAAHXZ
    virtual int getOutputSignal();

    // vIndex: 44, symbol: ?setOutputSignal@ComparatorBlockActor@@UEAAXH@Z
    virtual void setOutputSignal(int value);

    // NOLINTEND
};
