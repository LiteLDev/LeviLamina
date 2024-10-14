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
    // vIndex: 0
    virtual ~SculkVeinMultifaceSpreader();

    // vIndex: 1
    virtual bool _canSpreadFrom(class Block const& block, uchar facing) const;

    // vIndex: 2
    virtual bool _canSpreadInto(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class BlockPos const&    pos,
        uchar                    placementDirection
    ) const;

    // vIndex: 3
    virtual bool _isOtherBlockValidAsSource(class Block const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool _canSpreadFrom$(class Block const& block, uchar facing) const;

    MCAPI bool _canSpreadInto$(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class BlockPos const&    pos,
        uchar                    placementDirection
    ) const;

    MCAPI bool _isOtherBlockValidAsSource$(class Block const& block) const;

    // NOLINTEND
};
