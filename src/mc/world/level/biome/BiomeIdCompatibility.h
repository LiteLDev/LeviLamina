#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeIdCompatibility {
// NOLINTBEGIN
MCAPI extern uint const MAX_CUSTOM_BIOMES;

MCAPI uint adjustForReservedRanges(uint defaultId, std::string const& biomeName);

MCAPI bool isReserved(uint id);
// NOLINTEND

}; // namespace BiomeIdCompatibility
