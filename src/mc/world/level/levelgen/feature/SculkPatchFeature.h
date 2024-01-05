#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SculkPatchFeature : public ::IFeature {
public:
    // prevent constructor by default
    SculkPatchFeature& operator=(SculkPatchFeature const&);
    SculkPatchFeature(SculkPatchFeature const&);
    SculkPatchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkPatchFeature@@UEAA@XZ
    virtual ~SculkPatchFeature() = default;

    // vIndex: 1, symbol:
    // ?place@SculkPatchFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND
};
