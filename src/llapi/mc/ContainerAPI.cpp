#include "llapi/Global.h"
#include "llapi/mc/Container.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Vec3.hpp"

LIAPI std::string Container::getTypeName() {
    // ContainerType type = dAccess<ContainerType>(this, 8); //IDA Container::Container
    ContainerType type = getContainerType();
    return getContainerTypeName(type);
}

// Safely add items to the container
LIAPI bool Container::addItem_s(ItemStack* item) {
    if (!hasRoomForItem(*item))
        return false;
    addItem(*((ItemStack*)item)->clone_s());
    return true;
}

// Ignore item.mCount when given amount.
LIAPI bool Container::addItem_s(ItemStack* item, int amount) {
    auto single = item->clone_s();
    single->set(1);
    for (int i = 0; i < amount; i++)
    {
        if (!this->addItem(*single->clone_s()))
            return false;
    }
    return true;
}

LIAPI bool Container::addItemToFirstEmptySlot_s(ItemStack* item) {
    return addItemToFirstEmptySlot(*((ItemStack*)item)->clone_s());
}
// Safely remove items to the container
LIAPI bool Container::removeItem_s(int slot, unsigned int number) {
    if (slot >= getSize())
        return false;
    removeItem(slot, (int)number);
    return true;
}

LIAPI ItemStack* Container::getSlot(int slot) {
    if (slot >= getSize())
        return nullptr;
    auto list = getAllSlots();
    return const_cast<ItemStack*>(list[slot]);
}

LIAPI std::vector<const ItemStack*> Container::getAllSlots() {
    return getSlots();
}

LIAPI int Container::getSize() {
    // return (*(signed int(__fastcall**)(__int64))(*(_QWORD*)this + 112i64))((unsigned long long)this); //IDA Container::getSlotCopies
    return getContainerSize();
}

LIAPI bool Container::hasContainer(Vec3& pos, int dim) {
    return getContainerAt(pos, dim) != nullptr;
}

LIAPI Container* Container::getContainerAt(Vec3& pos, int dim) {
    return Level::getContainer(pos, dim);
}