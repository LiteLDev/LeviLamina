#include "ll/api/event/entity/MobEvent.h"
#include "ll/api/event/EventRefObjSerializer.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline entity {

void MobEvent::serialize(CompoundTag& nbt) const {
    ActorEvent::serialize(nbt);
    nbt["self"] = serializeRefObj(self());
}

Mob& MobEvent::self() const { return static_cast<Mob&>(ActorEvent::self()); }

} // namespace ll::event::inline entity
