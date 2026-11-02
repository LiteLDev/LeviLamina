#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPalette.h"

// auto generated forward declare list
// clang-format off
class Block;
class Level;
// clang-format on

class BlockHashPalette : public ::BlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<uint, uint64>> mNetworkIdToPaletteIndexMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockHashPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockPalette::PaletteType getPaletteType() /*override*/;

    virtual void appendBlock(::Block const& block) /*override*/;

    virtual ::Block const& getBlock(uint const& networkId) const /*override*/;

    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockHashPalette(::Level& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPalette::PaletteType $getPaletteType();

    MCNAPI void $appendBlock(::Block const& block);

    MCNAPI ::Block const& $getBlock(uint const& networkId) const;

    MCNAPI void $assignBlockNetworkId(::Block const& block, uint64 networkId) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
