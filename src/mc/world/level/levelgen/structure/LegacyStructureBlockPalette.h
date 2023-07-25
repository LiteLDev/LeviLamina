#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureBlockPalette {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTUREBLOCKPALETTE
public:
    LegacyStructureBlockPalette& operator=(LegacyStructureBlockPalette const&) = delete;
    LegacyStructureBlockPalette(LegacyStructureBlockPalette const&)            = delete;
#endif

public:
    /**
     * @symbol ??0LegacyStructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureBlockPalette();
    /**
     * @symbol ?getBlock\@LegacyStructureBlockPalette\@\@QEAAAEBVBlock\@\@H\@Z
     */
    MCAPI class Block const& getBlock(int);
    /**
     * @symbol ??1LegacyStructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~LegacyStructureBlockPalette();
};
