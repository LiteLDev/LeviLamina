#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

namespace BlockTypeIdMappingUtils {
// functions
// NOLINTBEGIN
MCAPI void addBlockTypeIdMappings();

MCAPI void clearMappings();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::unordered_map<uint, ::BlockType const*>& mBlockIdToVanillaBlockTypesMap();

MCAPI ::std::unordered_map<::std::string, int>& mBlockNameToBlockIdMap();
// NOLINTEND

} // namespace BlockTypeIdMappingUtils
