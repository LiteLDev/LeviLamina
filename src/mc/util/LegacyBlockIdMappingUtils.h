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
MCNAPI void addLegacyBlockIdMapping(::BlockLegacy const& legacyBlock, uint64 legacyId);

MCNAPI void addLegacyBlockIdMappings();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<uint, ::WeakPtr<::BlockLegacy const>>& mBlockIdToVanillaBlockTypesMap();

MCNAPI ::std::unordered_map<::std::string, int>& mBlockNameToBlockIdMap();
// NOLINTEND

} // namespace LegacyBlockIdMappingUtils
