#pragma once
#include "Global.h"
#include "MCApi/Container.hpp"
#include <string>
#include <vector>
struct ContainerObj : public Container {
    LIAPI std::string getTypeName();

    LIAPI bool               addItem(ItemStack* item);
    LIAPI bool               addItemToFirstEmptySlot(ItemStack* item);
    LIAPI bool               removeItem(int slot, unsigned int number);
    LIAPI ItemStack* getSlot(int slot);
    LIAPI std::vector<const ItemStack*> getAllSlots();
    LIAPI int                       getContainerSize();

    LIAPI bool  hasContainer(FloatVec4 pos);
    LIAPI Container* getContainer(FloatVec4 pos);
};