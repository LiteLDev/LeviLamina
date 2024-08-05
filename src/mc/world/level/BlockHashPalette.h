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
    virtual class Block const& getBlock(uint const&) const;

    // vIndex: 4
    virtual void assignBlockNetworkId(class Block const& block, uint64) const;

    MCAPI explicit BlockHashPalette(class Level& level);

    // NOLINTEND
};
