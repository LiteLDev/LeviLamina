#include <BlockAPI.h>
#include <LoggerAPI.h>
#include <BlockLegacyAPI.h>
#include <MCApi/Block.hpp>
#include <MCApi/Level.hpp>
#include <MCApi/HashedString.hpp>
#include <MCApi/BlockLegacy.hpp>
#include <MCApi/BlockPalette.hpp>
#include <NBTAPI.h>

BlockObj* BlockObj::create(string name, unsigned short tileData)
{
    BlockPalette* generator = SymCall("?getBlockPalette@Level@@UEBAAEBVBlockPalette@@XZ", BlockPalette*, Level*)(LocateService<Level>());
    auto blk = generator->getBlockLegacy(name);
    if (!blk)
        return nullptr;
    return (BlockObj*)((BlockLegacyObj*)blk)->toBlock(tileData);
}

BlockObj* BlockObj::create(Tag* nbt)
{
    std::pair<int, Block*> result;      // pair<enum BlockSerializationUtils::NBTState, Block*>
    SymCall("?tryGetBlockFromNBT@BlockSerializationUtils@@YA?AU?$pair@W4NBTState@BlockSerializationUtils@@PEBVBlock@@@std@@AEBVCompoundTag@@PEAUNbtToBlockCache@1@@Z",
        void*, void*, Tag*, int64_t)(&result, nbt, 0);
    return (BlockObj*)result.second;
}

string BlockObj::getName()
{
	return Block::getName().getString();
}

int BlockObj::getId()
{
	return getLegacyBlock().getBlockItemId();
}

unsigned short BlockObj::getTileData()
{
    // 等待大佬改进
    auto tileData = dAccess<unsigned short, 8>(this);
    auto blk = &getLegacyBlock();

    if (((BlockLegacyObj*)blk)->toBlock(tileData) == (Block*)this)
        return tileData;

    for (unsigned short i = 0; i < 16; ++i) {
        if (i == tileData)
            continue;
        if (((BlockLegacyObj*)blk)->toBlock(tileData) == (Block*)this)
            return i;
    }
    Logger::Error("Error in Raw_GetTileData");
    return 0;
}