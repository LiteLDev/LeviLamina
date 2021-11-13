#pragma once
#include "Global.h"
#include "MCApi/ItemStack.hpp"
class Tag;
class ItemActor;

struct ItemStackObj : public ItemStack {
    ItemStack* newItem();
    //ItemStack* newItem(std::string type, int count);
    //ItemStack* newItem(Tag* tag);
    ItemStack* cloneItem();
    ItemActor* spawnItemByItemStack(const FloatVec4& pos);

    std::string getItemName();
    std::string getCustomName();
    std::string getItemTypeName();
    int         getItemAux();
    int         getCount();

    bool setItem(ItemStack* oldItem, ItemStack* newItem);
    bool setLore(std::vector<std::string> lores);
};



