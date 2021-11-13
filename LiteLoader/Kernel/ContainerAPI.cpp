#include "ContainerAPI.h"
#include "global.h"
#include "itemapi.h"
#include <Header/SymbolHelper.h>
std::string ContainerObj::getTypeName() {
    //ContainerType type = dAccess<ContainerType>(this, 8); //IDA Container::Container
    ContainerType type = this->getContainerType();
    return this->getContainerTypeName(type);
}

//Safely add items to the container
bool ContainerObj::addItem(ItemStack* item) {
    if (!this->hasRoomForItem(*item))
        return false;
    ((Container*)this)->addItem(*((ItemStackObj*)item)->cloneItem());
    return true;
}

bool ContainerObj::addItemToFirstEmptySlot(ItemStack* item) {
    return ((Container*)this)->addItemToFirstEmptySlot(*((ItemStackObj*)item)->cloneItem());

}
//Safely remove items to the container
bool ContainerObj::removeItem(int slot, unsigned int number) {
    if (slot > this->getContainerSize())
        return false;
    ((Container*)this)->removeItem(slot, number);
    return true;
}

ItemStack* ContainerObj::getSlot(int slot) {
    if (slot > this->getContainerSize())
        return nullptr;
    auto list = this->getAllSlots();
    return const_cast<ItemStack*>(list[slot]);
}

std::vector<const ItemStack*> ContainerObj::getAllSlots() {
    return this->getSlots();
}

int ContainerObj::getContainerSize() {
    using _QWORD = unsigned long long;
    return (*(signed int(__fastcall**)(__int64))(*(_QWORD*)this + 112i64))((unsigned long long)this); //IDA Container::getSlotCopies
}

bool ContainerObj::hasContainer(FloatVec4 pos) {
    return getContainer(pos) != nullptr;
}

class DropperBlockActor;
Container* ContainerObj::getContainer(FloatVec4 pos) {
    Vec3 vec{pos.x, pos.y, pos.z};
    // This function didn't use 'this' pointer
    
    Container* container = SymCall("?_getContainerAt@DropperBlockActor@@AEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z",
                                   Container*, DropperBlockActor*, BlockSource*, Vec3*)(nullptr, LL::getBlockSourceByDim(pos.dim), &vec);

    return container;
}