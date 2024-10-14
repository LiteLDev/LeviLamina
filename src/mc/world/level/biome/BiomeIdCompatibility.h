#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeIdCompatibility {
// NOLINTBEGIN
MCAPI uint adjustForReservedRanges(uint defaultId, std::string const& biomeName);

MCAPI bool isReserved(uint id);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI uint const& MAX_CUSTOM_BIOMES();
// NOLINTEND

}; // namespace BiomeIdCompatibility
