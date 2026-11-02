#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

namespace BlockTypeIdMappingUtils {
// functions
// NOLINTBEGIN
MCNAPI void addBlockTypeIdMappings();

MCNAPI void clearMappings();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<uint, ::BlockType const*>& mBlockIdToVanillaBlockTypesMap();

MCNAPI ::std::unordered_map<::std::string, int>& mBlockNameToBlockIdMap();
// NOLINTEND

} // namespace BlockTypeIdMappingUtils
