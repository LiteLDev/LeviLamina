#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPalette.h"

class BlockHashPalette : public ::BlockPalette {
public:
    // prevent constructor by default
    BlockHashPalette& operator=(BlockHashPalette const&);
    BlockHashPalette(BlockHashPalette const&);
    BlockHashPalette();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockHashPalette() = default;

    // vIndex: 1
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2
    virtual void appendBlock(class Block const& block);

    // vIndex: 3
    virtual class Block const& getBlock(uint const& networkId) const;

    // vIndex: 4
    virtual void assignBlockNetworkId(class Block const& block, uint64 networkId) const;

    MCAPI explicit BlockHashPalette(class Level& level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Level& level);

    MCAPI void appendBlock$(class Block const& block);

    MCAPI void assignBlockNetworkId$(class Block const& block, uint64 networkId) const;

    MCAPI class Block const& getBlock$(uint const& networkId) const;

    MCAPI ::BlockPalette::PaletteType getPaletteType$();

    // NOLINTEND
};
