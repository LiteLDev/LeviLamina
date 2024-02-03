#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBlockWorldGenAPI;
class BlockPos;
class Random;
class RenderParams;

class IFeature {
public:
    // prevent constructor by default
    IFeature& operator=(IFeature const&);
    IFeature(IFeature const&);
    IFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const = 0;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // symbol: ?setBlockSafe@IFeature@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@H@Z
    MCAPI bool
    setBlockSafe(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int updateFlags)
        const;

    // NOLINTEND
};
