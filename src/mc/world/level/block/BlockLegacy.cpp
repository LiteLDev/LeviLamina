#include "mc/world/level/block/BlockLegacy.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/VanillaBlockConversion.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

std::string const&        BlockLegacy::getTypeName() const { return mNameInfo->mFullName->getString(); }
optional_ref<BlockLegacy> BlockLegacy::tryGetFromRegistry(std::string_view name) {
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(HashedString{name});
    return blockLegacyPtr.get();
}
optional_ref<BlockLegacy const> BlockLegacy::tryGetFromRegistry(uint legacyBlockID) {
    auto blockLegacyPtr = VanillaBlockConversion::getBlockTypeFromLegacyId(legacyBlockID);
    return blockLegacyPtr.get();
}
