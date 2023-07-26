#include "mc/ActorDamageSource.hpp"
#include "mc/Level.hpp"

Actor* ActorDamageSource::getEntity() {
    ActorUniqueID v6 = getDamagingEntityUniqueID();
    return Global<Level>->getEntity(v6);
}
