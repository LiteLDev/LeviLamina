#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
// clang-format on

namespace LegacyBlockIdMappingUtils {
// functions
// NOLINTBEGIN
MCAPI void addLegacyBlockIdMapping(::BlockLegacy const& legacyBlock, uint64 legacyId);

MCAPI void addLegacyBlockIdMappings();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::unordered_map<uint, ::WeakPtr<::BlockLegacy const>>& mBlockIdToVanillaBlockTypesMap();

MCAPI ::std::unordered_map<::std::string, int>& mBlockNameToBlockIdMap();
// NOLINTEND

} // namespace LegacyBlockIdMappingUtils
