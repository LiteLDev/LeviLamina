#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureBlockPalette {
public:
    // prevent constructor by default
    LegacyStructureBlockPalette& operator=(LegacyStructureBlockPalette const&);
    LegacyStructureBlockPalette(LegacyStructureBlockPalette const&);

public:
    // NOLINTBEGIN
    MCAPI LegacyStructureBlockPalette();

    MCAPI class Block const& getBlock(int id);

    MCAPI ~LegacyStructureBlockPalette();

    // NOLINTEND
};
