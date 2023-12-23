#include "ll/api/event/player/PlayerEvent.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["player"] = (uintptr_t)&player();
}

ServerPlayer& PlayerEvent::player() const { return mPlayer; }

} // namespace ll::event::inline player
