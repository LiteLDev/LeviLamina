#include "liteloader/api/LoggerAPI.h"
#include "mc/Block.hpp"
#include "mc/BlockLegacy.hpp"
#include "mc/BlockPalette.hpp"
#include "mc/BlockSerializationUtils.hpp"
#include "mc/CompoundTag.hpp"
#include "mc/HashedString.hpp"
#include "mc/Level.hpp"

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

string Block::getTypeName() const { return Block::getName().getString(); }

int Block::getId() const { return getLegacyBlock().getBlockItemId(); }

std::unique_ptr<CompoundTag> Block::getNbt() { return CompoundTag::fromBlock(this); }

bool Block::setNbt(CompoundTag* nbt) {
    nbt->setBlock(this);
    return true;
}
