#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureBlockPalette {

public:
    // prevent constructor by default
    LegacyStructureBlockPalette& operator=(LegacyStructureBlockPalette const&) = delete;
    LegacyStructureBlockPalette(LegacyStructureBlockPalette const&)            = delete;

public:
    /**
     * @symbol ??0LegacyStructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureBlockPalette(); // NOLINT
    /**
     * @symbol ?getBlock\@LegacyStructureBlockPalette\@\@QEAAAEBVBlock\@\@H\@Z
     */
    MCAPI class Block const& getBlock(int); // NOLINT
    /**
     * @symbol ??1LegacyStructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~LegacyStructureBlockPalette(); // NOLINT
};
