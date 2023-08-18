#include "mc/world/level/block/BlockInstance.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/utils/BedrockBlocks.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/level.h"

BlockInstance::BlockInstance() : pos(BlockPos::MIN), dimID(VanillaDimensions::Undefined) {}

class BlockSource& BlockInstance::getBlockSource() const { return Level::getBlockSource(dimID); }

bool BlockInstance::hasBlock() const { return getBlockSource().hasBlock(pos); }

class Block const& BlockInstance::getBlock(int layer) const {
    auto& blockSource = getBlockSource();
    switch (layer) {
    case 0:
        return blockSource.getBlock(pos);
    case 1:
        return blockSource.getExtraBlock(pos);
    default:
        return *BedrockBlocks::mAir;
    }
}

optional_ref<class BlockActor const> BlockInstance::getBlockEntity() const {
    auto beptr = getBlockSource().getBlockEntity(pos);
    if (beptr != nullptr) {
        return *beptr;
    }
    return std::nullopt;
}

BlockInstance::operator bool() const { return *this == BlockInstance::Null; }

bool BlockInstance::operator==(BlockInstance const& b) const { return b.pos == pos && b.dimID == dimID; }

BlockInstance const BlockInstance::Null = BlockInstance();