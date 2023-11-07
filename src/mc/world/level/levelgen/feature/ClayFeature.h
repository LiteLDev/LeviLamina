#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class ClayFeature : public ::Feature {
public:
    // prevent constructor by default
    ClayFeature& operator=(ClayFeature const&);
    ClayFeature(ClayFeature const&);
    ClayFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ClayFeature() = default;

    // vIndex: 3, symbol: ?place@ClayFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0ClayFeature@@QEAA@H@Z
    MCAPI explicit ClayFeature(int);

    // NOLINTEND
};
