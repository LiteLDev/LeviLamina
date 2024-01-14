#include "ll/api/event/Event.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event {

void Event::serialize(CompoundTag&) const {}

void Event::serializeWithCancel(CompoundTag& nbt) const { nbt["cancelled"] = mCancelled; }

void Event::deserialize(CompoundTag const&) {}

void Event::deserializeWithCancel(CompoundTag const& nbt) { mCancelled = nbt["cancelled"]; }

} // namespace ll::event
