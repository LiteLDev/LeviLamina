#include "ll/api/event/Event.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event {
void Event::serialize(CompoundTag&) const {}
void Event::serializeWithCancell(CompoundTag& nbt) const { nbt["cancelled"] = mCancelled; }
void Event::deserialize(CompoundTag const&) {}
void Event::deserializeWithCancell(CompoundTag const& nbt) { mCancelled = nbt["cancelled"]; }
} // namespace ll::event
