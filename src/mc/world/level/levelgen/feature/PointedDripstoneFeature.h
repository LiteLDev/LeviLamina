#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class PointedDripstoneFeature : public ::IFeature {
public:
    // prevent constructor by default
    PointedDripstoneFeature& operator=(PointedDripstoneFeature const&);
    PointedDripstoneFeature(PointedDripstoneFeature const&);
    PointedDripstoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PointedDripstoneFeature@@UEAA@XZ
    virtual ~PointedDripstoneFeature() = default;

    // vIndex: 1, symbol:
    // ?place@PointedDripstoneFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
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
    // symbol:
    // ?_createBaseDripstonePatch@PointedDripstoneFeature@@CAXAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@@Z
    MCAPI static void
    _createBaseDripstonePatch(class IBlockWorldGenAPI& target, class Random& random, class BlockPos const&);

    // NOLINTEND
};
