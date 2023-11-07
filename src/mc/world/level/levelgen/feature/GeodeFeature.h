#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class GeodeFeature : public ::IFeature {
public:
    // prevent constructor by default
    GeodeFeature& operator=(GeodeFeature const&);
    GeodeFeature(GeodeFeature const&);
    GeodeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~GeodeFeature() = default;

    // vIndex: 1, symbol:
    // ?place@GeodeFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ?canSupportGeode@GeodeFeature@@SA_NAEBVBlock@@@Z
    MCAPI static bool canSupportGeode(class Block const&);

    // NOLINTEND
};
