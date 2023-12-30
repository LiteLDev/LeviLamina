#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockPileFeature : public ::Feature {
public:
    // prevent constructor by default
    BlockPileFeature& operator=(BlockPileFeature const&);
    BlockPileFeature(BlockPileFeature const&);
    BlockPileFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPileFeature@@UEAA@XZ
    virtual ~BlockPileFeature() = default;

    // vIndex: 3, symbol: ?place@BlockPileFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 4, symbol: ?getBlockToPlace@BlockPileFeature@@MEBAAEBVBlock@@AEAVRandom@@@Z
    virtual class Block const& getBlockToPlace(class Random& random) const;

    // symbol: ??0BlockPileFeature@@QEAA@AEBVBlock@@@Z
    MCAPI explicit BlockPileFeature(class Block const& block);

    // NOLINTEND
};
