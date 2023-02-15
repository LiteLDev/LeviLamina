#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/Level.hpp"

Actor* ActorDamageSource::getEntity() {
    ActorUniqueID v6 = getDamagingEntityUniqueID();
    return Global<Level>->getEntity(v6);
}
