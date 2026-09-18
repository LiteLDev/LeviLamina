#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockConversion {
LLNDAPI ::BlockType const* getBlockTypeFromLegacyId(uint id);

// functions
// NOLINTBEGIN
MCAPI int getBlockTypeLegacyIdFromName(::std::string const& rawName);
// NOLINTEND

} // namespace VanillaBlockConversion
