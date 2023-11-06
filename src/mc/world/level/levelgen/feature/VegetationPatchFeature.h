#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class VegetationPatchFeature : public ::IFeature {
public:
    // prevent constructor by default
    VegetationPatchFeature& operator=(VegetationPatchFeature const&);
    VegetationPatchFeature(VegetationPatchFeature const&);
    VegetationPatchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~VegetationPatchFeature();

    // vIndex: 1, symbol:
    // ?place@VegetationPatchFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isExposedDirection@VegetationPatchFeature@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI&, class BlockPos const&, uchar) const;

    // symbol:
    // ?_placeGroundPatch@VegetationPatchFeature@@AEBA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HH@Z
    MCAPI std::vector<class BlockPos>
          _placeGroundPatch(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int) const;

    // NOLINTEND
};
