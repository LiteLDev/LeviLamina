#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeIdCompatibility {
// NOLINTBEGIN
// symbol: ?MAX_CUSTOM_BIOMES@BiomeIdCompatibility@@3IB
MCAPI extern uint const MAX_CUSTOM_BIOMES;

// symbol:
// ?adjustForReservedRanges@BiomeIdCompatibility@@YAIIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI uint adjustForReservedRanges(uint defaultId, std::string const& biomeName);

// symbol: ?isReserved@BiomeIdCompatibility@@YA_NI@Z
MCAPI bool isReserved(uint id);
// NOLINTEND

}; // namespace BiomeIdCompatibility
