#include "Global.h"
#include "ItemAPI.h"
#include "mcapi/item.hpp"
#include "mcapi/spawner.hpp"
#include "mcapi/level.hpp"
#include <string>
#include <vector>
#include <Header/SymbolHelper.h>
using namespace std;

ItemStack* ItemStackObj::newItem() {
    try {
        ItemStack* a    = (ItemStack*)new char[272];
        ItemStack* item = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
        return item;
    } catch (...) {
        return nullptr;
    }
}
/*
ItemStack* Raw_NewItem(std::string type, int count) {
    Tag* nbt = Tag::createTag(TagType::Compound);
    nbt->putByte("WasPickedUp", 0);
    nbt->putShort("Damage", 0);
    nbt->putString("Name", type);
    nbt->putByte("Count", count);

    return Raw_NewItem(nbt);
}

ItemStack* ItemStackObj::newItem(Tag* tag) {
    ItemStack* item = newItem();
    if (!item)
        return nullptr;
    tag->setItem(item);

    return item;
}
*/
ItemStack* ItemStackObj::cloneItem() {
    ItemStack* it = newItem();
    if (!this)
        return nullptr;
    return (&this->clone());
}

class Spawner;
ItemActor* ItemStackObj::spawnItemByItemStack(const FloatVec4& pos) {
    try {
        Spawner* sp = SymCall("?getSpawner@Level@@UEBAAEAVSpawner@@XZ", Spawner*, Level*)(LocateService<Level>());
        Vec3   vec{pos.x, pos.y, pos.z};
        ItemActor* ac = sp->spawnItem(*LL::getBlockSourceByDim(pos.dim), *this, nullptr, vec, 0);
        return ac;
    } catch (...) {
        return nullptr;
    }
}

string ItemStackObj::getItemName() {
    if (this->isNull())
        return "";
    return this->getName();
}

string ItemStackObj::getCustomName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getCustomName();
}

std::string ItemStackObj::getItemTypeName() {
    if (this->isNull())
        return "";
    return ((ItemStack*)this)->getItem()->getSerializedName();
}

int ItemStackObj::getItemAux() {
    if (this->isNull())
        return 0;
    return ((ItemStack*)this)->getAuxValue();
}

int ItemStackObj::getCount() {
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


bool ItemStackObj::setLore(vector<string> lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}