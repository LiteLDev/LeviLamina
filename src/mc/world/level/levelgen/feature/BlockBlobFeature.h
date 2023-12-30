#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockBlobFeature : public ::Feature {
public:
    // prevent constructor by default
    BlockBlobFeature& operator=(BlockBlobFeature const&);
    BlockBlobFeature(BlockBlobFeature const&);
    BlockBlobFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockBlobFeature@@UEAA@XZ
    virtual ~BlockBlobFeature() = default;

    // vIndex: 3, symbol: ?place@BlockBlobFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0BlockBlobFeature@@QEAA@AEBVBlock@@H@Z
    MCAPI BlockBlobFeature(class Block const& block, int radius);

    // NOLINTEND
};
