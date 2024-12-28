#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
// clang-format on

namespace VanillaBlockConversion {
// functions
// NOLINTBEGIN
MCAPI ::WeakPtr<::BlockLegacy const> getBlockTypeFromLegacyId(uint id);

MCAPI int getBlockTypeLegacyIdFromName(::std::string const& rawName);

MCAPI ::Block const* tryGetLegacyState(uint id, uint data);
// NOLINTEND

} // namespace VanillaBlockConversion
