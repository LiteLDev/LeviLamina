#include <MC/ActorDamageSource.hpp>
#include <MC/Level.hpp>

Actor* ActorDamageSource::getEntity()
{
    ActorUniqueID v6 = getDamagingEntityUniqueID();
    return Global<Level>->getEntity(v6);
}