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
    // vIndex: 0, symbol: __gen_??1BlockHashPalette@@UEAA@XZ
    virtual ~BlockHashPalette() = default;

    // vIndex: 1, symbol: ?getPaletteType@BlockHashPalette@@UEAA?AW4PaletteType@BlockPalette@@XZ
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2, symbol: ?appendBlock@BlockHashPalette@@UEAAXAEBVBlock@@@Z
    virtual void appendBlock(class Block const& block);

    // vIndex: 3, symbol: ?getBlock@BlockHashPalette@@UEBAAEBVBlock@@AEBI@Z
    virtual class Block const& getBlock(uint const&) const;

    // vIndex: 4, symbol: ?assignBlockNetworkId@BlockHashPalette@@MEBAXAEBVBlock@@_K@Z
    virtual void assignBlockNetworkId(class Block const& block, uint64) const;

    // symbol: ??0BlockHashPalette@@QEAA@AEAVLevel@@@Z
    MCAPI explicit BlockHashPalette(class Level& level);

    // NOLINTEND
};
