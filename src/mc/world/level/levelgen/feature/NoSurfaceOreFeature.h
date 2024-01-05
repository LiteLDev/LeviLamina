#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class NoSurfaceOreFeature : public ::IFeature {
public:
    // prevent constructor by default
    NoSurfaceOreFeature& operator=(NoSurfaceOreFeature const&);
    NoSurfaceOreFeature(NoSurfaceOreFeature const&);
    NoSurfaceOreFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NoSurfaceOreFeature@@UEAA@XZ
    virtual ~NoSurfaceOreFeature() = default;

    // vIndex: 1, symbol:
    // ?place@NoSurfaceOreFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
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
};
