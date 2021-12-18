#include "Global.h"
#include "MC/Item.hpp"
#include "MC/ItemStack.hpp"
#include "MC/Spawner.hpp"
#include "MC/Level.hpp"
#include "MC/ItemInstance.hpp"
#include <MC/CompoundTag.hpp>
#include <string>
#include <utility>
#include <vector>

using namespace std;

static_assert(sizeof(ItemStack) == 144);
static_assert(sizeof(ItemInstance) == 136);

ItemStack *ItemStack::create() {
    try {
        auto *a = (ItemStack *) new char[sizeof(ItemStack)];
        ItemStack *item = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
        return item;
    } catch (...) {
        return nullptr;
    }
}

ItemStack *ItemStack::create(CompoundTag *tag) {
    ItemStack *item = create();
    if (!item)
        return nullptr;
    tag->setItemStack(item);
    return item;
}

ItemStack *ItemStack::create(std::string type, int count) {
    CompoundTag *nbt = CompoundTag::create();
    nbt->putByte("WasPickedUp", 0);
    nbt->putShort("Damage", 0);
    nbt->putString("Name", std::move(type));
    nbt->putByte("Count", count);
    return create(nbt);
}

ItemStack ItemStack::fromItemInstance(ItemInstance const &ins) {
    try {
        return {ins};
    }
    catch (...) {
        return ItemStack::EMPTY_ITEM;
    }
}

ItemStack *ItemStack::clone_s() const {
    ItemStack *a = ItemStack::create();
    *a = clone();
    return a;
}

std::string ItemStack::getTypeName() const {
    if (isNull())
        return "";
    return getItem()->getSerializedName();
}

int ItemStack::getAux() const {
    if (this->isNull())
        return 0;
    return getAuxValue();
}

int ItemStack::getCount() const {
    if (this->isNull())
        return 0;
    return dAccess<unsigned char, 34>(this);
}

bool ItemStack::setItem(ItemStack *newItem) {
    CompoundTag *nbt = CompoundTag::fromItemStack(newItem);
    nbt->setItemStack(this);
    return true;
}

bool ItemStack::setLore(const vector<string> &lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}

CompoundTag *ItemStack::getNbt() {
    return CompoundTag::fromItemStack(this);
}

bool ItemStack::setNbt(CompoundTag *nbt) {
    nbt->setItemStack(this);
    return true;
}