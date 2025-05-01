#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/MultifaceSpreader.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class SculkVeinMultifaceSpreader : public ::MultifaceSpreader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool _canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const /*override*/;

    // vIndex: 1
    virtual bool _canSpreadFrom(::Block const& block, uchar const facing) const /*override*/;

    // vIndex: 3
    virtual bool _isOtherBlockValidAsSource(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~SculkVeinMultifaceSpreader() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;

    MCNAPI bool $_canSpreadFrom(::Block const& block, uchar const facing) const;

    MCNAPI bool $_isOtherBlockValidAsSource(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
