#include "Global.h"
#include <MC/ItemActor.hpp>

int ItemActor::getDespawnTime() { 
    return dAccess<int, 507 * 4>(this);//ItemActor::normalTick
}

void ItemActor::setDespawnTime(int a1) {
    dAccess<int, 507 * 4>(this) = a1;
}

int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 502 * 4>(this);
}