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
    // vIndex: 0, symbol: __gen_??1VegetationPatchFeature@@UEAA@XZ
    virtual ~VegetationPatchFeature() = default;

    // vIndex: 1, symbol:
    // ?place@VegetationPatchFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isExposedDirection@VegetationPatchFeature@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI& target, class BlockPos const& pos, uchar direction) const;

    // symbol:
    // ?_placeGroundPatch@VegetationPatchFeature@@AEBA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HH@Z
    MCAPI std::vector<class BlockPos>
    _placeGroundPatch(class IBlockWorldGenAPI& target, class Random& random, class BlockPos const& origin, int, int)
        const;

    // NOLINTEND
};
