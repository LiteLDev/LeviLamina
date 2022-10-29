#include "llapi/Global.h"
#include "llapi/mc/ItemActor.hpp"

ItemStack* ItemActor::getItemStack() {
    return (ItemStack*)((uintptr_t)this + 1512); // IDA Player::take
}

int ItemActor::getDespawnTime() {
    return dAccess<int, 423 * 4>(this); // ItemActor::postNormalTick
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, 423 * 4>(this) = a1;
    return true;
}

int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 418 * 4>(this);
}