#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

namespace VanillaBlockConversion {
// NOLINTBEGIN
MCAPI class WeakPtr<class BlockLegacy const> getBlockTypeFromLegacyId(uint id);

MCAPI int getBlockTypeLegacyIdFromName(std::string const& rawName);

MCAPI class Block const* tryGetLegacyState(uint id, uint data);
// NOLINTEND

}; // namespace VanillaBlockConversion
