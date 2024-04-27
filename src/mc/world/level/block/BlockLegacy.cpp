#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/utils/VanillaBlockConversion.h"

std::string const& BlockLegacy::getTypeName() const {
    return reinterpret_cast<BlockLegacy::NameInfo const*>(&(this->getRawNameHash()))->mFullName.getString();
}
optional_ref<BlockLegacy> BlockLegacy::tryGetFromRegistry(std::string_view name) {
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(HashedString{name});
    return blockLegacyPtr.get();
}
optional_ref<BlockLegacy const> BlockLegacy::tryGetFromRegistry(uint legacyBlockID) {
    auto blockLegacyPtr = VanillaBlockConversion::getBlockTypeFromLegacyId(legacyBlockID);
    return blockLegacyPtr.get();
}
