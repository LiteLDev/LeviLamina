#include <MC/Block.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/ComposterBlock.hpp>
#include <MC/BlockSource.hpp>
Block* BlockLegacy::toBlock(unsigned short tileData)
{
    Block *bl = (Block*)&getStateFromLegacyData(tileData);
    // 某些方块在 tileData 太大时会变成其他方块，原版 /setblock 指令就存在这个问题（也有可能是被设计成这样的？）
    if (bl && &bl->getLegacyBlock() == (BlockLegacy*)this)
        return bl;
    return (Block*)&getRenderBlock();
}

string BlockLegacy::getTypeName() {
    return dAccess<string, 128>(this);
}

bool BlockLegacy::applyBoneMeal(BlockSource* a1, BlockPos* a2) {
    auto vtbl = dlsym("??_7ComposterBlock@@6B@");
    if (*(void**)this == vtbl) {
        ((ComposterBlock*)this)->emitBoneMeal(*Global<Level>, *a1, *a2);
        return true;
    }
    return false;
}



