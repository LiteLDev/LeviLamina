#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CentralSpikedFeature : public ::Feature {
public:
    // prevent constructor by default
    CentralSpikedFeature& operator=(CentralSpikedFeature const&);
    CentralSpikedFeature(CentralSpikedFeature const&);
    CentralSpikedFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CentralSpikedFeature@@UEAA@XZ
    virtual ~CentralSpikedFeature() = default;

    // vIndex: 3, symbol: ?place@CentralSpikedFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0CentralSpikedFeature@@QEAA@AEBVBlock@@@Z
    MCAPI explicit CentralSpikedFeature(class Block const& block);

    // NOLINTEND
};
