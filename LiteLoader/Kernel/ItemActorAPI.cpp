#include "Global.h"
#include <MC/ItemActor.hpp>

ItemStack* ItemActor::getItemStack()
{
    return (ItemStack*)((uintptr_t)this + 1864);    //IDA Player::take
}

int ItemActor::getDespawnTime() { 
    return dAccess<int, 507 * 4>(this);//ItemActor::normalTick
}

void ItemActor::setDespawnTime(int a1) {
    dAccess<int, 507 * 4>(this) = a1;
}

int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 502 * 4>(this);
}