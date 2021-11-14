#pragma once
#include "Global.h"
#include "MCApi/ItemStack.hpp"
class Tag;
class ItemActor;

struct ItemStackObj : public ItemStack {
    LIAPI ItemStack* create();
    LIAPI ItemStack* create(std::string type, int count);
    LIAPI ItemStack* create(Tag* tag);
    LIAPI ItemStack* clone();

    LIAPI std::string getName();
    LIAPI std::string getCustomName();
    LIAPI std::string getTypeName();
    LIAPI int         getAux();
    LIAPI int         getCount();

    //bool setItem(ItemStack* oldItem, ItemStack* newItem);
    bool setLore(std::vector<std::string> lores);
};



