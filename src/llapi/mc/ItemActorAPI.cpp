#include "llapi/Global.h"
#include "llapi/mc/ItemActor.hpp"

ItemStack* ItemActor::getItemStack() {
    return (ItemStack*)((uintptr_t)this + 1464); // IDA Player::take
}

int ItemActor::getDespawnTime() {
    return dAccess<int, 411 * 4>(this); // ItemActor::postNormalTick
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, 411 * 4>(this) = a1;
    return true;
}

/*int& ItemActor::despawnTime() {
    return *((int*)this + 411*4);
}*/


int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 406 * 4>(this);
}