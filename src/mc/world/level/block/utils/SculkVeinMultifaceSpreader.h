#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/MultifaceSpreader.h"

class SculkVeinMultifaceSpreader : public ::MultifaceSpreader {
public:
    // prevent constructor by default
    SculkVeinMultifaceSpreader& operator=(SculkVeinMultifaceSpreader const&) = delete;
    SculkVeinMultifaceSpreader(SculkVeinMultifaceSpreader const&)            = delete;
    SculkVeinMultifaceSpreader()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_canSpreadFrom@SculkVeinMultifaceSpreader@@UEBA_NAEBVBlock@@E@Z
    virtual bool _canSpreadFrom(class Block const&, uchar) const;

    // vIndex: 2, symbol:
    // ?_canSpreadInto@SculkVeinMultifaceSpreader@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
    virtual bool _canSpreadInto(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, uchar) const;

    // vIndex: 3, symbol: ?_isOtherBlockValidAsSource@SculkVeinMultifaceSpreader@@UEBA_NAEBVBlock@@@Z
    virtual bool _isOtherBlockValidAsSource(class Block const&) const;

    // symbol: ??1SculkVeinMultifaceSpreader@@UEAA@XZ
    MCVAPI ~SculkVeinMultifaceSpreader();

    // NOLINTEND
};
