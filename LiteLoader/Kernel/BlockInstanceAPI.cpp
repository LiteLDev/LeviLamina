#include <Global.h>
#include <BlockInstanceAPI.h>
#include <MC/Level.hpp>
#include <MC/ItemStack.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Block.hpp>
#include <MC/ItemStack.hpp>
#include <MC/LootComponent.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/ItemInstance.hpp>
//bad
bool BlockInstance::breakNaturally() {
    auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim),pos, 1);
    return out;
}

bool BlockInstance::breakNaturally(ItemStack* tool) {
    bool canDestroy = tool->canDestroy(block);
    if (canDestroy) {
        auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 1);
    }
    auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 0);
    return out;
}

ItemStack& BlockInstance::getBlockDrops() {
    auto v17 = (const_cast<BlockLegacy*>(&block->getLegacyBlock()))->asItemInstance(*Level::getBlockSource(dim), pos,*block);
    ItemStack* a = (ItemStack*)new char[272];
    auto &out = SymCall("??0ItemStack@@QEAA@AEBVItemInstance@@@Z", ItemStack&, ItemStack*, ItemInstance)(a, v17);
    std::cout << &out << std::endl;
    return out;
}
