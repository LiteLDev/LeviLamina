#include "ll/api/event/client/ClientEvent.h"
#include "ll/api/event/EventRefObjSerializer.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline client {

void ClientEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["self"] = serializeRefObj(self());
}

ClientInstance& ClientEvent::self() const { return mSelf; }

} // namespace ll::event::inline client
