#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/MultifaceSpreader.h"

class SculkVeinMultifaceSpreader : public ::MultifaceSpreader {
public:
    // prevent constructor by default
    SculkVeinMultifaceSpreader& operator=(SculkVeinMultifaceSpreader const&);
    SculkVeinMultifaceSpreader(SculkVeinMultifaceSpreader const&);
    SculkVeinMultifaceSpreader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SculkVeinMultifaceSpreader@@UEAA@XZ
    virtual ~SculkVeinMultifaceSpreader();

    // vIndex: 1, symbol: ?_canSpreadFrom@SculkVeinMultifaceSpreader@@UEBA_NAEBVBlock@@E@Z
    virtual bool _canSpreadFrom(class Block const& block, uchar facing) const;

    // vIndex: 2, symbol:
    // ?_canSpreadInto@SculkVeinMultifaceSpreader@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
    virtual bool
    _canSpreadInto(class IBlockWorldGenAPI& target, class Block const& self, class BlockPos const& pos, uchar) const;

    // vIndex: 3, symbol: ?_isOtherBlockValidAsSource@SculkVeinMultifaceSpreader@@UEBA_NAEBVBlock@@@Z
    virtual bool _isOtherBlockValidAsSource(class Block const& block) const;

    // NOLINTEND
};
