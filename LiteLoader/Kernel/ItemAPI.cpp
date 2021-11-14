#include "Global.h"
#include "ItemAPI.h"
#include "MCAPI/Item.hpp"
#include "MCApi/itemstack.hpp"
#include "MCApi/spawner.hpp"
#include "MCApi/level.hpp"
#include <string>
#include <vector>
#include <Header/LevelAPI.h>
#include "NBTAPI.h"
using namespace std;

ItemStack* ItemStackObj::create() {
    try {
        ItemStack* a    = (ItemStack*)new char[272];
        ItemStack* item = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
        return item;
    } catch (...) {
        return nullptr;
    }
}

ItemStack* ItemStackObj::create(Tag* tag) {
    ItemStack* item = create();
    if (!item)
        return nullptr;
    tag->setItem(item);
    return item;
}

ItemStack* ItemStackObj::create(std::string type, int count) {
    Tag* nbt = Tag::createTag(Tag::Type::Compound);
    nbt->putByte("WasPickedUp", 0);
    nbt->putShort("Damage", 0);
    nbt->putString("Name", type);
    nbt->putByte("Count", count);
    return create(nbt);
}


ItemStack* ItemStackObj::clone() {
    ItemStack* a = (ItemStack*)new char[272];
    *a = ((ItemStack*)this)->clone();
    return a;
}

string ItemStackObj::getName() {
    if (this->isNull())
        return "";
    return this->getName();
}

string ItemStackObj::getCustomName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getCustomName();
}

std::string ItemStackObj::getTypeName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getItem()->getSerializedName();
}

int ItemStackObj::getAux() {
    if (this->isNull())
        return 0;
    return ((ItemStack*)this)->getAuxValue();
}

int ItemStackObj::getCount() {
    if (this->isNull())
        return 0;
    return *((char*)this + 34); // LevelContainerModel::_getContainer
}

bool ItemStackObj::setItem(ItemStack* newItem) {
    Tag* nbt = Tag::fromItem(newItem);
    nbt->setItem(this);
    return true;
}



bool ItemStackObj::setLore(vector<string> lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}