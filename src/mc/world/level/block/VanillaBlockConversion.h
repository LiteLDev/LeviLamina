#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/BlockTypeIdMappingUtils.h"

namespace VanillaBlockConversion {
::BlockType const* getBlockTypeFromLegacyId(uint id) {
    auto& map = BlockTypeIdMappingUtils::mBlockIdToVanillaBlockTypesMap();
    if (map.contains(id)) {
        return map[id];
    }
    return nullptr;
}

// functions
// NOLINTBEGIN
MCAPI int getBlockTypeLegacyIdFromName(::std::string const& rawName);
// NOLINTEND

} // namespace VanillaBlockConversion
