#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FossilFeature : public ::Feature {
public:
    // prevent constructor by default
    FossilFeature& operator=(FossilFeature const&);
    FossilFeature(FossilFeature const&);
    FossilFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FossilFeature@@UEAA@XZ
    virtual ~FossilFeature() = default;

    // vIndex: 3, symbol: ?place@FossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?STRUCTURE_LOCATION_FOSSIL@FossilFeature@@0QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

    // NOLINTEND
};
