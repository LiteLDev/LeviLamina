#pragma once
#include "Global.h"
#include "MCApi/ItemStack.hpp"
class Tag;
class ItemActor;

struct ItemStackObj : public ItemStack {
    LIAPI ItemStack* create();
    //LIAPI ItemStack* newItem(std::string type, int count);
    //LIAPI ItemStack* newItem(Tag* tag);
    LIAPI ItemStack* clone();
    LIAPI ItemActor* spawnItemByItemStack(const FloatVec4& pos);

    LIAPI std::string getName();
    LIAPI std::string getCustomName();
    LIAPI std::string getTypeName();
    LIAPI int         getAux();
    LIAPI int         getCount();

    LIAPI bool setItem(ItemStack* oldItem, ItemStack* newItem);
    LIAPI bool setLore(std::vector<std::string> lores);
};



