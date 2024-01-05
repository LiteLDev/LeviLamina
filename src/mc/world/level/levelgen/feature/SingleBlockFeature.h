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
    // vIndex: 0, symbol: __gen_??1SingleBlockFeature@@UEAA@XZ
    virtual ~SingleBlockFeature() = default;

    // vIndex: 1, symbol:
    // ?place@SingleBlockFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_mayAttach@SingleBlockFeature@@AEBAPEBVBlock@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI class Block const* _mayAttach(class IBlockWorldGenAPI& target, class BlockPos const& pos) const;

    // NOLINTEND
};
