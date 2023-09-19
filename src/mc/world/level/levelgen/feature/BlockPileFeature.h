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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@BlockPileFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 4, symbol: ?getBlockToPlace@BlockPileFeature@@MEBAAEBVBlock@@AEAVRandom@@@Z
    virtual class Block const& getBlockToPlace(class Random&) const;

    // symbol: ??0BlockPileFeature@@QEAA@AEBVBlock@@@Z
    MCAPI explicit BlockPileFeature(class Block const&);

    // NOLINTEND
};
