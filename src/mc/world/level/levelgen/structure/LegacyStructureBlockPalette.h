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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
