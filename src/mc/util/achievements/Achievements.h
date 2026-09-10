#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct BiomeIdType;
// clang-format on

namespace Achievements {
// functions
// NOLINTBEGIN
MCNAPI int getIndexForFroglight(::ItemStack const& item);

#ifdef LL_PLAT_C
MCNAPI bool isSevenSeasBiome(::BiomeIdType biomeId);
#endif
// NOLINTEND

} // namespace Achievements
