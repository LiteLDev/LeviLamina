#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/Block.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FlowerFeature : public ::Feature {
public:
    const Block& mBlock;

public:
    // prevent constructor by default
    FlowerFeature& operator=(FlowerFeature const&);
    FlowerFeature(FlowerFeature const&);
    FlowerFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FlowerFeature@@UEAA@XZ
    virtual ~FlowerFeature();

    // vIndex: 3, symbol: ?place@FlowerFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0FlowerFeature@@QEAA@AEBVBlock@@@Z
    MCAPI explicit FlowerFeature(class Block const& block);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeMushroom@FlowerFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandom@@@Z
    MCAPI bool _placeMushroom(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    mushroom,
        class Random&         random
    ) const;

    // NOLINTEND
};
