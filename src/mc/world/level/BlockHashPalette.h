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
    ::ll::TypedStorage<8, 16, ::std::map<uint, uint64>> mNetworkIdToPaletteIndexMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockPalette::PaletteType getPaletteType() /*override*/;

    virtual void appendBlock(::Block const& blockState) /*override*/;

    virtual ::Block const& getBlock(uint const& networkId) const /*override*/;

    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const /*override*/;

    virtual ~BlockHashPalette() /*override*/ = default;
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
