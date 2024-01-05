#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class MultifaceFeature : public ::IFeature {
public:
    // prevent constructor by default
    MultifaceFeature& operator=(MultifaceFeature const&);
    MultifaceFeature(MultifaceFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MultifaceFeature@@UEAA@XZ
    virtual ~MultifaceFeature() = default;

    // vIndex: 1, symbol:
    // ?place@MultifaceFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const& pos, class Random& random, class RenderParams& renderParams)
        const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0MultifaceFeature@@QEAA@XZ
    MCAPI MultifaceFeature();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_placeBlockIfPossible@MultifaceFeature@@AEBA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEBV?$vector@EV?$allocator@E@std@@@3@@Z
    MCAPI std::optional<class BlockPos>
    _placeBlockIfPossible(class BlockSource& region, class BlockPos const& pos, class Random& random, std::vector<uchar> const&)
        const;

    // symbol: ?_getShuffledDirections@MultifaceFeature@@CA?AV?$vector@EV?$allocator@E@std@@@std@@V23@@Z
    MCAPI static std::vector<uchar> _getShuffledDirections(std::vector<uchar> faces);

    // NOLINTEND
};
