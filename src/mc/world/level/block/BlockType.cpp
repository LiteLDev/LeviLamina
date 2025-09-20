#include "mc/world/level/block/BlockType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/VanillaBlockConversion.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

std::string const&      BlockType::getTypeName() const { return mNameInfo->mFullName->getString(); }
optional_ref<BlockType> BlockType::tryGetFromRegistry(std::string_view name) {
    auto blockTypePtr = BlockTypeRegistry::get().lookupByName(HashedString{name});
    return blockTypePtr.get();
}
optional_ref<BlockType const> BlockType::tryGetFromRegistry(uint legacyBlockID) {
    auto blockTypePtr = VanillaBlockConversion::getBlockTypeFromLegacyId(legacyBlockID);
    return blockTypePtr.get();
}
