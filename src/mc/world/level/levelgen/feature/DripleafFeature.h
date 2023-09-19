#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DripleafFeature : public ::Feature {
public:
    // prevent constructor by default
    DripleafFeature& operator=(DripleafFeature const&);
    DripleafFeature(DripleafFeature const&);
    DripleafFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@DripleafFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeBigDripleaf@DripleafFeature@@CA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI static bool _placeBigDripleaf(class BlockSource&, class BlockPos const&, class Random&);

    // NOLINTEND
};
