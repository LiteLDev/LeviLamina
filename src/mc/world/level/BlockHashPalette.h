#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPalette.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockHashPalette : public ::BlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5d6c54;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockHashPalette& operator=(BlockHashPalette const&);
    BlockHashPalette(BlockHashPalette const&);
    BlockHashPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BlockPalette::PaletteType getPaletteType() /*override*/;

    // vIndex: 2
    virtual void appendBlock(::Block const& blockState) /*override*/;

    // vIndex: 3
    virtual ::Block const& getBlock(uint const& networkId) const /*override*/;

    // vIndex: 4
    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const /*override*/;

    // vIndex: 0
    virtual ~BlockHashPalette() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockPalette::PaletteType $getPaletteType();

    MCAPI void $appendBlock(::Block const& blockState);

    MCAPI ::Block const& $getBlock(uint const& networkId) const;

    MCAPI void $assignBlockNetworkId(::Block const& block, uint64 networkId) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
