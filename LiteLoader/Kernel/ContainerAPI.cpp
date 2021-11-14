#include "ContainerAPI.h"
#include "global.h"
#include "itemapi.h"
#include <Header/LevelAPI.h>
LIAPI std::string ContainerObj::getTypeName() {
    //ContainerType type = dAccess<ContainerType>(this, 8); //IDA Container::Container
    ContainerType type = this->getContainerType();
    return this->getContainerTypeName(type);
}

//Safely add items to the container
LIAPI bool ContainerObj::addItem(ItemStack* item) {
    if (!this->hasRoomForItem(*item))
        return false;
    ((Container*)this)->addItem(*((ItemStackObj*)item)->clone());
    return true;
}

LIAPI bool ContainerObj::addItemToFirstEmptySlot(ItemStack* item) {
    return ((Container*)this)->addItemToFirstEmptySlot(*((ItemStackObj*)item)->clone());

}
//Safely remove items to the container
LIAPI bool ContainerObj::removeItem(int slot, unsigned int number) {
    if (slot > this->getSize())
        return false;
    ((Container*)this)->removeItem(slot, number);
    return true;
}

LIAPI ItemStack* ContainerObj::getSlot(int slot) {
    if (slot > this->getSize())
        return nullptr;
    auto list = this->getAllSlots();
    return const_cast<ItemStack*>(list[slot]);
}

LIAPI std::vector<const ItemStack*> ContainerObj::getAllSlots() {
    return this->getSlots();
}

LIAPI int ContainerObj::getSize() {
    using _QWORD = unsigned long long;
    return (*(signed int(__fastcall**)(__int64))(*(_QWORD*)this + 112i64))((unsigned long long)this); //IDA Container::getSlotCopies
}

LIAPI bool ContainerObj::hasContainer(FloatVec4 pos) {
    return getContainer(pos) != nullptr;
}

class DropperBlockActor;
LIAPI Container* ContainerObj::getContainer(FloatVec4 pos) {
    Vec3 vec{pos.x, pos.y, pos.z};
    // This function didn't use 'this' pointer
    
    Container* container = SymCall("?_getContainerAt@DropperBlockActor@@AEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z",
                                   Container*, DropperBlockActor*, BlockSource*, Vec3*)(nullptr, LevelObj::getBlockSource(pos.dim), &vec);

    return container;
}