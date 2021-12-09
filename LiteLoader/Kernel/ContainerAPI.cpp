#include <MC/Container.hpp>
#include "global.h"
#include <MC/ItemStack.hpp>
#include <MC/Level.hpp>

LIAPI std::string Container::getTypeName() {
    //ContainerType type = dAccess<ContainerType>(this, 8); //IDA Container::Container
    ContainerType type = getContainerType();
    return getContainerTypeName(type);
}

//Safely add items to the container
LIAPI bool Container::addItem(ItemStack* item) {
    if (!hasRoomForItem(*item))
        return false;
   addItem(*((ItemStack*)item)->clone_s());
    return true;
}

LIAPI bool Container::addItemToFirstEmptySlot(ItemStack* item) {
    return addItemToFirstEmptySlot(*((ItemStack*)item)->clone_s());

}
//Safely remove items to the container
LIAPI bool Container::removeItem(int slot, unsigned int number) {
    if (slot > getSize())
        return false;
    removeItem(slot, number);
    return true;
}

LIAPI ItemStack* Container::getSlot(int slot) {
    if (slot > getSize())
        return nullptr;
    auto list = getAllSlots();
    return const_cast<ItemStack*>(list[slot]);
}

LIAPI std::vector<const ItemStack*> Container::getAllSlots() {
    return getSlots();
}

LIAPI int Container::getSize() {
    using _QWORD = unsigned long long;
    return (*(signed int(__fastcall**)(__int64))(*(_QWORD*)this + 112i64))((unsigned long long)this); //IDA Container::getSlotCopies
}

LIAPI bool Container::hasContainer(Vec3& pos, int dim) {
    return getContainer(pos,dim) != nullptr;
}

class DropperBlockActor;
LIAPI Container* Container::getContainer(Vec3& pos, int dim) {
    Vec3 vec{pos.x, pos.y, pos.z};

    // This function didn't use 'this' pointer
    Container* container = SymCall("?_getContainerAt@DropperBlockActor@@AEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z",
                                   Container*, DropperBlockActor*, BlockSource*, Vec3*)(nullptr, Level::getBlockSource(dim), &vec);

    return container;
}