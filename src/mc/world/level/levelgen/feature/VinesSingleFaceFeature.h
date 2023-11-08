#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class VinesSingleFaceFeature : public ::IFeature {
public:
    // prevent constructor by default
    VinesSingleFaceFeature& operator=(VinesSingleFaceFeature const&);
    VinesSingleFaceFeature(VinesSingleFaceFeature const&);
    VinesSingleFaceFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VinesSingleFaceFeature@@UEAA@XZ
    virtual ~VinesSingleFaceFeature() = default;

    // vIndex: 1, symbol:
    // ?place@VinesSingleFaceFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND
};
