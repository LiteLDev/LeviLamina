#include <LoggerAPI.h>
#include <MC/Block.hpp>
#include <MC/Level.hpp>
#include <MC/HashedString.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/BlockPalette.hpp>
#include <MC/BlockSerializationUtils.hpp>
#include <MC/CompoundTag.hpp>

Block* Block::create(string name, unsigned short tileData) {
	BlockPalette* generator = Global<Level>->getBlockPalette();
	auto blk = generator->getBlockLegacy(name);
	if (!blk)
		return nullptr;
	return (Block*)((BlockLegacy*)blk)->toBlock(tileData);
}

Block* Block::create(CompoundTag* nbt) {
    // pair<enum BlockSerializationUtils::NBTState, Block*>
    auto result = BlockSerializationUtils::tryGetBlockFromNBT(*nbt, nullptr);
    return const_cast<Block*>(result.second);
}

string Block::getNameString() {
	return Block::getName().getString();
}

string Block::getTypeName()
{
	auto& blg = getLegacyBlock();
	return dAccess<string>(&blg, 128);
}

int Block::getId() {
	return getLegacyBlock().getBlockItemId();
}

unsigned short Block::getTileData() {
	// 等待大佬改进
	auto tileData = dAccess<unsigned short, 8>(this);
	auto blk = &getLegacyBlock();

	if (((BlockLegacy*)blk)->toBlock(tileData) == (Block*)this)
		return tileData;

	for (unsigned short i = 0; i < 16; ++i) {
		if (i == tileData)
			continue;
		if (((BlockLegacy*)blk)->toBlock(tileData) == (Block*)this)
			return i;
	}
	Logger::Error("Error in GetTileData");
	return 0;
}

CompoundTag* Block::getNbt()
{
	return CompoundTag::fromBlock(this);
}

bool Block::setNbt(CompoundTag* nbt)
{
	nbt->setBlock(this);
	return true;
}