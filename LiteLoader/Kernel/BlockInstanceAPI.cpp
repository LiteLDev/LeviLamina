#include <Global.h>
#include <MC/BlockInstance.hpp>
#include <MC/Level.hpp>
#include <MC/ItemStack.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Block.hpp>
#include <MC/ItemStack.hpp>
#include <MC/LootComponent.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/ItemInstance.hpp>

bool BlockInstance::operator==(BlockInstance const& bli) {
    return block == bli.block && pos == bli.pos && dim == bli.dim;
};

Block* BlockInstance::getBlock() {
    return isNull() ? nullptr : block;
};

//bad
bool BlockInstance::breakNaturally() {
    auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim),pos, 1);
    return out;
}

bool BlockInstance::breakNaturally(ItemStack* tool) {
    bool canDestroy = tool->canDestroy(block);
    bool out;
    if (canDestroy) {
        out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 1);
    }
    out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 0);
    return out;
}

ItemStack& BlockInstance::getBlockDrops() {
    auto v17 = (const_cast<BlockLegacy*>(&block->getLegacyBlock()))->asItemInstance(*Level::getBlockSource(dim), pos,*block);
    ItemStack* a = (ItemStack*)new char[272];
    auto &out = SymCall("??0ItemStack@@QEAA@AEBVItemInstance@@@Z", ItemStack&, ItemStack*, ItemInstance)(a, v17);
    std::cout << &out << std::endl;
    return out;
}

bool BlockInstance::isNull() {
    return *this == BlockInstance::Null;
}

const BlockInstance BlockInstance::Null = BlockInstance(nullptr, {INT_MIN, INT_MIN, INT_MIN}, -1);
