#include "mc/server/commands/CommandBlockName.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

std::string const& CommandBlockName::getBlockName() const {
    return BlockTypeRegistry::get().getBlockNameFromNameHash(mBlockNameHash);
}
std::string CommandBlockName::getDescriptionId() const {
    return BlockType::buildDescriptionIdFromNameInfo(BlockType::extractBlockNameInfo(getBlockName()));
}
