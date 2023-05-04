#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/HookAPI.h"
#include "llapi/mc/ActorUniqueID.hpp"
#include "llapi/LoggerAPI.h"
#include "llapi/mc/Actor.hpp"

Actor* ActorDamageSource::getEntity() {
    ActorUniqueID v6 = getDamagingEntityUniqueID();
    return Global<Level>->getEntity(v6);
}

bool ActorDamageSource::setEntity(ActorUniqueID uid) {
    if (Global<Level>->getEntity(uid)) {
        dAccess<ActorUniqueID, 32>(this) = uid;
        return true;
    }
    return false;
}