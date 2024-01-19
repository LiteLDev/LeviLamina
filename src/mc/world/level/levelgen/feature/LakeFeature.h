#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
#include "mc/world/level/block/Block.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LakeFeature : public ::Feature {
public:
    Block const&                                          mBlock;                            // this+0x20
    Block const&                                          mEmptyBlock;                       // this+0x28
    std::optional<XoroshiroPositionalRandomFactory> const mXoroshiroPositionalRandomFactory; // this+0x30

public:
    // prevent constructor by default
    LakeFeature& operator=(LakeFeature const&);
    LakeFeature(LakeFeature const&);
    LakeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LakeFeature@@UEAA@XZ
    virtual ~LakeFeature();

    // vIndex: 3, symbol: ?place@LakeFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0LakeFeature@@QEAA@AEBVBlock@@V?$optional@VXoroshiroPositionalRandomFactory@@@std@@@Z
    MCAPI LakeFeature(class Block const& block, std::optional<class XoroshiroPositionalRandomFactory>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_check@LakeFeature@@AEBA_NAEBVBlockPos@@V?$span@_N$0IAA@@gsl@@@Z
    MCAPI bool _check(class BlockPos const& pos, gsl::span<bool, 2048> grid) const;

    // NOLINTEND
};
