#include "llapi/LoggerAPI.h"
#include "liteloader/LiteLoader.h"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/BlockPalette.hpp"
#include "llapi/mc/BlockSerializationUtils.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/HashedString.hpp"
#include "llapi/mc/Level.hpp"

Block* Block::create(const string& name, unsigned short tileData) {
    BlockPalette& generator = Global<Level>->getBlockPalette();
    auto blk = generator.getBlockLegacy(name);
    if (!blk)
        return nullptr;
    return const_cast<BlockLegacy*>(blk)->toBlock(tileData);
}

Block* Block::create(CompoundTag* nbt) {
    // pair<enum BlockSerializationUtils::NBTState, Block*>
    auto result = BlockSerializationUtils::tryGetBlockFromNBT(*nbt, nullptr);
    return const_cast<Block*>(result.second);
}

string Block::getTypeName() const {
    return Block::getName().getString();
}


int Block::getId() const {
    return getLegacyBlock().getBlockItemId();
}

std::unique_ptr<CompoundTag> Block::getNbt() {
    return CompoundTag::fromBlock(this);
}

bool Block::setNbt(CompoundTag* nbt) {
    nbt->setBlock(this);
    return true;
}