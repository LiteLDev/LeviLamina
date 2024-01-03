#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFeature {
public:
    // prevent constructor by default
    IFeature& operator=(IFeature const&);
    IFeature(IFeature const&);
    IFeature();

public:
    // NOLINTBEGIN
    // symbol: ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool isValidPlacement(std::string const&);

    // symbol: ?setBlockSafe@IFeature@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@H@Z
    MCAPI bool
    setBlockSafe(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int updateFlags)
        const;

    // NOLINTEND
};
