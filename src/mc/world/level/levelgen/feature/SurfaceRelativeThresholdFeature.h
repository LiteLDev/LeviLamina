#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SurfaceRelativeThresholdFeature : public ::IFeature {
public:
    // prevent constructor by default
    SurfaceRelativeThresholdFeature& operator=(SurfaceRelativeThresholdFeature const&);
    SurfaceRelativeThresholdFeature(SurfaceRelativeThresholdFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SurfaceRelativeThresholdFeature() = default;

    // vIndex: 1, symbol:
    // ?place@SurfaceRelativeThresholdFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ??0SurfaceRelativeThresholdFeature@@QEAA@XZ
    MCAPI SurfaceRelativeThresholdFeature();

    // NOLINTEND
};
