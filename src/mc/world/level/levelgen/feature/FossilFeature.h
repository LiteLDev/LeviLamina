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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FossilFeature() = default;

    // vIndex: 3, symbol: ?place@FossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?STRUCTURE_LOCATION_FOSSIL@FossilFeature@@0QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $STRUCTURE_LOCATION_FOSSIL() { return STRUCTURE_LOCATION_FOSSIL; }

    // NOLINTEND
};
