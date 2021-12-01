#include "Global.h"
#include "MC/Item.hpp"
#include "MC/ItemStack.hpp"
#include "MC/Spawner.hpp"
#include "MC/level.hpp"
#include <string>
#include <vector>
#include <MC/CompoundTag.hpp>
using namespace std;

ItemStack* ItemStack::create() {
    try {
        ItemStack* a    = (ItemStack*)new char[272];
        ItemStack* item = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
        return item;
    } catch (...) {
        return nullptr;
    }
}

ItemStack* ItemStack::create(Tag* tag) {
    ItemStack* item = create();
    if (!item)
        return nullptr;
    tag->setItem(item);
    return item;
}

ItemStack* ItemStack::create(std::string type, int count) {
    CompoundTag* nbt = (CompoundTag*)Tag::createTag(Tag::Type::Compound);
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

string ItemStack::getName() {
    if (this->isNull())
        return "";
    return this->getName();
}

string ItemStack::getCustomName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getCustomName();
}

std::string ItemStack::getTypeName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getItem()->getSerializedName();
}

int ItemStack::getAux() {
    if (this->isNull())
        return 0;
    return ((ItemStack*)this)->getAuxValue();
}

int ItemStack::getCount() {
    if (this->isNull())
        return 0;
    return dAccess<unsigned char, 34>(this);
}

bool ItemStack::setItem(ItemStack* newItem) {
    Tag* nbt = Tag::fromItem(newItem);
    nbt->setItem(this);
    return true;
}

bool ItemStack::setLore(vector<string> lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}