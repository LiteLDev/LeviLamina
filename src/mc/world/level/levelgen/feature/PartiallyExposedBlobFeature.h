#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class PartiallyExposedBlobFeature : public ::IFeature {
public:
    // prevent constructor by default
    PartiallyExposedBlobFeature& operator=(PartiallyExposedBlobFeature const&);
    PartiallyExposedBlobFeature(PartiallyExposedBlobFeature const&);
    PartiallyExposedBlobFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PartiallyExposedBlobFeature@@UEAA@XZ
    virtual ~PartiallyExposedBlobFeature() = default;

    // vIndex: 1, symbol:
    // ?place@PartiallyExposedBlobFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    origin,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?isWaterOrAir@PartiallyExposedBlobFeature@@CA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

    // NOLINTEND
};
