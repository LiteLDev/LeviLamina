#include <MC/Block.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/BlockSource.hpp>
#include <MC/ComposterBlock.hpp>
Block* BlockLegacy::toBlock(unsigned short tileData) {
    auto* bl = const_cast<Block*>(&getStateFromLegacyData(tileData));
    if (bl && &bl->getLegacyBlock() == (BlockLegacy*)this)
        return bl;
    return const_cast<Block*>(&getRenderBlock());
}

string BlockLegacy::getTypeName() {
    return dAccess<string, 128>(this);
}

bool BlockLegacy::applyBoneMeal(class BlockSource* a1, class BlockPos const& a2) {
    auto vtbl = dlsym("??_7ComposterBlock@@6B@");
    if (*(void**)this == vtbl) {
        dynamic_cast<ComposterBlock*>(this)->emitBoneMeal(*Global<Level>, *a1, a2);
        return true;
    }
    return false;
}
