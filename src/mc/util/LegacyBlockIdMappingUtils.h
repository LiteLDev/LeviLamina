#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

namespace LegacyBlockIdMappingUtils {
// NOLINTBEGIN
MCAPI void addLegacyBlockIdMapping(class BlockLegacy const& legacyBlock, uint64 legacyId);

MCAPI void addLegacyBlockIdMappings();
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI std::unordered_map<uint, class WeakPtr<class BlockLegacy const>>& mBlockIdToVanillaBlockTypesMap();

MCAPI std::unordered_map<std::string, int>& mBlockNameToBlockIdMap();
// NOLINTEND

}; // namespace LegacyBlockIdMappingUtils
