#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class WeightedRandomFeature : public ::IFeature {
public:
    // prevent constructor by default
    WeightedRandomFeature& operator=(WeightedRandomFeature const&);
    WeightedRandomFeature(WeightedRandomFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~WeightedRandomFeature() = default;

    // vIndex: 1, symbol:
    // ?place@WeightedRandomFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0WeightedRandomFeature@@QEAA@XZ
    MCAPI WeightedRandomFeature();

    // NOLINTEND
};
