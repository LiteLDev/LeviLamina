#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

namespace VanillaBlockConversion {
// functions
// NOLINTBEGIN
MCAPI ::WeakPtr<::BlockType const> getBlockTypeFromLegacyId(uint id);

MCAPI int getBlockTypeLegacyIdFromName(::std::string const& rawName);
// NOLINTEND

} // namespace VanillaBlockConversion
