#include "llapi/Global.h"
#include "llapi/mc/ItemActor.hpp"

ItemStack* ItemActor::getItemStack() {
    return &dAccess<ItemStack, 1216>(this); // IDA Player::take
}

int ItemActor::getDespawnTime() {
    return dAccess<int, 349 * 4>(this); // ItemActor::postNormalTick
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, 349 * 4>(this) = a1;
    return true;
}

/*int& ItemActor::despawnTime() {
    return *((int*)this + 411*4);
}*/


int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 344 * 4>(this);
}