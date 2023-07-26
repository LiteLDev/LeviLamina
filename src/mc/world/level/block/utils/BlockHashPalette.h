#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPalette.h"

class BlockHashPalette {

public:
    // prevent constructor by default
    BlockHashPalette& operator=(BlockHashPalette const&) = delete;
    BlockHashPalette(BlockHashPalette const&)            = delete;
    BlockHashPalette()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getPaletteType\@BlockHashPalette\@\@UEAA?AW4PaletteType\@BlockPalette\@\@XZ
     */
    virtual enum class BlockPalette::PaletteType getPaletteType(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?appendBlock\@BlockHashPalette\@\@UEAAXAEBVBlock\@\@\@Z
     */
    virtual void appendBlock(class Block const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getBlock\@BlockHashPalette\@\@UEBAAEBVBlock\@\@AEBI\@Z
     */
    virtual class Block const& getBlock(unsigned int const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?assignBlockNetworkId\@BlockHashPalette\@\@MEBAXAEBVBlock\@\@_K\@Z
     */
    virtual void assignBlockNetworkId(class Block const&, unsigned __int64) const; // NOLINT
    /**
     * @symbol ??0BlockHashPalette\@\@QEAA\@AEAVLevel\@\@\@Z
     */
    MCAPI BlockHashPalette(class Level&); // NOLINT
};
