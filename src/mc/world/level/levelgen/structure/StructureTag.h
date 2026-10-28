#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StructureTag {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string const& BLOCK_PALETTE();
#endif

MCAPI ::std::string const& FORMAT_VERSION();

MCAPI ::std::string const& NEIGHBOR_CHANGED_QUEUE_SEQUENCE();
// NOLINTEND

} // namespace StructureTag
