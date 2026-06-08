#include "mc/server/commands/CommandBlockName.h"

#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

std::string const& CommandBlockName::getBlockName() const {
    return BlockTypeRegistry::get().getBlockNameFromNameHash(mBlockNameHash);
}
std::string CommandBlockName::getDescriptionId() const {
    auto        nameInfo = BlockType::extractBlockNameInfo(getBlockName());
    std::string sourceName;
    if (nameInfo.mNamespaceName.get() == "minecraft") {
        sourceName = nameInfo.mRawName->mStr;
    } else {
        sourceName = nameInfo.mFullName->mStr;
    }

    return Block::BLOCK_DESCRIPTION_PREFIX() + sourceName;
}
