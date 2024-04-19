#include "ll/api/event/Event.h"
#include "ll/api/reflection/TypeName.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event {

void Event::serialize(CompoundTag& nbt) const { nbt["eventId"] = getId().name; }

void Event::serializeWithCancel(CompoundTag& nbt) const { nbt["cancelled"] = mCancelled; }

void Event::deserialize(CompoundTag const&) {}

EventId Event::getId() const { return EventId{reflection::removeTypePrefix(reflection::getDynamicRawName(*this))}; }

void Event::deserializeWithCancel(CompoundTag const& nbt) { mCancelled = nbt["cancelled"]; }

} // namespace ll::event
