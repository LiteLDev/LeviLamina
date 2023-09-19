#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaAnemoneFeature : public ::Feature {
public:
    // prevent constructor by default
    SeaAnemoneFeature& operator=(SeaAnemoneFeature const&);
    SeaAnemoneFeature(SeaAnemoneFeature const&);
    SeaAnemoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@SeaAnemoneFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
