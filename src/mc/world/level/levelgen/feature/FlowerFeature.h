#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FlowerFeature : public ::Feature {
public:
    // prevent constructor by default
    FlowerFeature& operator=(FlowerFeature const&);
    FlowerFeature(FlowerFeature const&);
    FlowerFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@FlowerFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??1FlowerFeature@@UEAA@XZ
    MCVAPI ~FlowerFeature();

    // symbol: ??0FlowerFeature@@QEAA@AEBVBlock@@@Z
    MCAPI explicit FlowerFeature(class Block const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeMushroom@FlowerFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandom@@@Z
    MCAPI bool _placeMushroom(class BlockSource&, class BlockPos const&, class Block const&, class Random&) const;

    // NOLINTEND
};
