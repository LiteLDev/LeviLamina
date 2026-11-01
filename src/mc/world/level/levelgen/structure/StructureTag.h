#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StructureTag {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& BLOCK_PALETTE();
#endif

MCNAPI ::std::string const& FORMAT_VERSION();

MCNAPI ::std::string const& NEIGHBOR_CHANGED_QUEUE_SEQUENCE();
// NOLINTEND

} // namespace StructureTag
