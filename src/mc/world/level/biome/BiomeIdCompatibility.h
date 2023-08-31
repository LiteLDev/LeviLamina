#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeIdCompatibility {
// NOLINTBEGIN
/**
 * @symbol ?MAX_CUSTOM_BIOMES\@BiomeIdCompatibility\@\@3IB
 */
MCAPI extern uint32_t const MAX_CUSTOM_BIOMES;
/**
 * @symbol
 * ?adjustForReservedRanges\@BiomeIdCompatibility\@\@YAIIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI uint32_t adjustForReservedRanges(uint32_t, std::string const&);
/**
 * @symbol ?isReserved\@BiomeIdCompatibility\@\@YA_NI\@Z
 */
MCAPI bool isReserved(uint32_t);
// NOLINTEND

}; // namespace BiomeIdCompatibility
