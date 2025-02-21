#include "mc/server/commands/CommandBlockName.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

std::string const& CommandBlockName::getBlockName() const {
    return BlockTypeRegistry::getBlockNameFromNameHash(mBlockNameHash);
}
std::string CommandBlockName::getDescriptionId() const {
    return BlockLegacy::buildDescriptionIdFromNameInfo(BlockLegacy::extractBlockNameInfo(getBlockName()));
}
