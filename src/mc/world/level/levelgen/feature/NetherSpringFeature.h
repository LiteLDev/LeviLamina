#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherSpringFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherSpringFeature& operator=(NetherSpringFeature const&);
    NetherSpringFeature(NetherSpringFeature const&);
    NetherSpringFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetherSpringFeature@@UEAA@XZ
    virtual ~NetherSpringFeature();

    // vIndex: 3, symbol: ?place@NetherSpringFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0NetherSpringFeature@@QEAA@AEBVBlock@@_N@Z
    MCAPI NetherSpringFeature(class Block const&, bool);

    // NOLINTEND
};
