#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

namespace BlockTypeIdMappingUtils {
// functions
// NOLINTBEGIN
MCNAPI void addBlockTypeIdMapping(::BlockType const& blockType, uint64 legacyId);

MCNAPI void addBlockTypeIdMappings();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<uint, ::WeakPtr<::BlockType const>>& mBlockIdToVanillaBlockTypesMap();

MCNAPI ::std::unordered_map<::std::string, int>& mBlockNameToBlockIdMap();
// NOLINTEND

}
