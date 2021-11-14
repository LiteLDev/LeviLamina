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

LIAPI ItemStack* ItemStackObj::create() {
    try {
        ItemStack* a    = (ItemStack*)new char[272];
        ItemStack* item = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
        return item;
    } catch (...) {
        return nullptr;
    }
}

LIAPI ItemStack* ItemStackObj::create(Tag* tag) {
    ItemStack* item = create();
    if (!item)
        return nullptr;
    tag->setItem(item);
    return item;
}

LIAPI ItemStack* ItemStackObj::create(std::string type, int count) {
    Tag* nbt = Tag::createTag(Tag::Type::Compound);
    nbt->putByte("WasPickedUp", 0);
    nbt->putShort("Damage", 0);
    nbt->putString("Name", type);
    nbt->putByte("Count", count);
    return create(nbt);
}


LIAPI ItemStack* ItemStackObj::clone() {
    ItemStack* a = (ItemStack*)new char[272];
    *a = ((ItemStack*)this)->clone();
    return a;
}
class Spawner;
LIAPI ItemActor* ItemStackObj::spawnItemByItemStack(const FloatVec4& pos) {
    try {
        Spawner* sp = SymCall("?getSpawner@Level@@UEBAAEAVSpawner@@XZ", Spawner*, Level*)(LocateService<Level>());
        Vec3   vec{pos.x, pos.y, pos.z};
        ItemActor* ac = sp->spawnItem(*LevelObj::getBlockSource(pos.dim), *this, nullptr, vec, 0);
        return ac;
    } catch (...) {
        return nullptr;
    }
}

LIAPI string ItemStackObj::getName() {
    if (this->isNull())
        return "";
    return this->getName();
}

LIAPI string ItemStackObj::getCustomName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getCustomName();
}

LIAPI std::string ItemStackObj::getTypeName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getItem()->getSerializedName();
}

LIAPI int ItemStackObj::getAux() {
    if (this->isNull())
        return 0;
    return ((ItemStack*)this)->getAuxValue();
}

LIAPI int ItemStackObj::getCount() {
    if (this->isNull())
        return 0;
    return *((char*)this + 34); // LevelContainerModel::_getContainer
}
/*
bool ItemStackObj::setItem(ItemStack* oldItem, ItemStack* newItem) {
    Tag* nbt = Tag::fromItem(newItem);
    nbt->setItem(oldItem);
    return true;
}
*/


LIAPI bool ItemStackObj::setLore(vector<string> lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}