#include "llapi/mc/ItemActor.hpp"
#include "llapi/memory/Hook.h"

using ll::memory::dAccess;

ItemStack* ItemActor::getItemStack() {
    return (ItemStack*)((uintptr_t)this + 1152); // IDA Player::take
}

int ItemActor::getDespawnTime() {
    return dAccess<int, 333 * 4>(this); // ItemActor::postNormalTick
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, 333 * 4>(this) = a1;
    return true;
}

/*int& ItemActor::despawnTime() {
    return *((int*)this + 411*4);
}*/


int ItemActor::getLatestSpawnTime() { return dAccess<int, 328 * 4>(this); }
