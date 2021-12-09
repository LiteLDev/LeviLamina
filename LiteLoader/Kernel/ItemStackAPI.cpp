#include "Global.h"
#include "MC/Item.hpp"
#include "MC/ItemStack.hpp"
#include "MC/Spawner.hpp"
#include "MC/level.hpp"
#include <MC/CompoundTag.hpp>
#include <string>
#include <vector>
using namespace std;

ItemStack* ItemStack::create() {
    try {
        ItemStack* a = (ItemStack*)new char[272];
        ItemStack* item = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
        return item;
    } catch (...) {
        return nullptr;
    }
}

ItemStack* ItemStack::create(CompoundTag* tag) {
    ItemStack* item = create();
    if (!item)
        return nullptr;
    tag->setItemStack(item);
    return item;
}

ItemStack* ItemStack::create(std::string type, int count) {
    CompoundTag* nbt = CompoundTag::create();
    nbt->putByte("WasPickedUp", 0);
    nbt->putShort("Damage", 0);
    nbt->putString("Name", type);
    nbt->putByte("Count", count);
    return create(nbt);
}


ItemStack* ItemStack::clone_s() {
    ItemStack* a = (ItemStack*)new char[272];
    *a = ((ItemStack*)this)->clone();
    return a;
}

string ItemStack::getName() const {
    if (this->isNull())
        return "";
    return this->getName();
}

string ItemStack::getCustomName() const {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getCustomName();
}

std::string ItemStack::getTypeName() const {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getItem()->getSerializedName();
}

int ItemStack::getAux() const {
    if (this->isNull())
        return 0;
    return ((ItemStack*)this)->getAuxValue();
}

int ItemStack::getCount() const {
    if (this->isNull())
        return 0;
    return dAccess<unsigned char, 34>(this);
}

bool ItemStack::setItem(ItemStack* newItem) {
    CompoundTag* nbt = CompoundTag::fromItemStack(newItem);
    nbt->setItemStack(this);
    return true;
}

bool ItemStack::setLore(vector<string> lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}

CompoundTag* ItemStack::getNbt() {
    return CompoundTag::fromItemStack(this);
}

bool ItemStack::setNbt(CompoundTag* nbt) {
    nbt->setItemStack(this);
    return true;
}