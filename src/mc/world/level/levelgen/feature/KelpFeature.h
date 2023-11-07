#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class KelpFeature : public ::Feature {
public:
    // prevent constructor by default
    KelpFeature& operator=(KelpFeature const&);
    KelpFeature(KelpFeature const&);
    KelpFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~KelpFeature() = default;

    // vIndex: 3, symbol: ?place@KelpFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
