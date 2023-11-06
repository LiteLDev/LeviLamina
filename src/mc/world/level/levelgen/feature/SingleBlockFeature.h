#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SingleBlockFeature : public ::IFeature {
public:
    // prevent constructor by default
    SingleBlockFeature& operator=(SingleBlockFeature const&);
    SingleBlockFeature(SingleBlockFeature const&);
    SingleBlockFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SingleBlockFeature();

    // vIndex: 1, symbol:
    // ?place@SingleBlockFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_mayAttach@SingleBlockFeature@@AEBAPEBVBlock@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI class Block const* _mayAttach(class IBlockWorldGenAPI&, class BlockPos const&) const;

    // NOLINTEND
};
