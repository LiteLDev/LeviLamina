#include "ll/api/event/actor/ActorEvent.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline actor {

void ActorEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["self"] = (uintptr_t)&self();
}

Actor& ActorEvent::self() const { return mSelf; }

} // namespace ll::event::inline actor
