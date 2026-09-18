#include "mc/world/level/block/VanillaBlockConversion.h"
#include "mc/util/BlockTypeIdMappingUtils.h"

namespace VanillaBlockConversion {
::BlockType const* getBlockTypeFromLegacyId(uint id) {
    auto& map = BlockTypeIdMappingUtils::mBlockIdToVanillaBlockTypesMap();
    if (map.contains(id)) {
        return map[id];
    }
    return nullptr;
}
} // namespace VanillaBlockConversion
