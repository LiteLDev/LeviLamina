#include "ll/api/event/player/PlayerEvent.h"
#include "ll/api/event/EventRefObjSerializer.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerEvent::serialize(CompoundTag& nbt) const {
    MobEvent::serialize(nbt);
    nbt["self"] = serializeRefObj(self());
}

Player& PlayerEvent::self() const { return static_cast<Player&>(MobEvent::self()); }

} // namespace ll::event::inline player
