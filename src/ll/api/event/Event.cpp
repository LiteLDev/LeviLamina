#include "ll/api/event/Event.h"
#include "ll/api/reflection/TypeName.h"

#include "mc/deps/nbt/CompoundTag.h"

namespace ll::event {
namespace {
ConcurrentDenseMap<std::type_index, EventId>& runtimeEventIds() {
    static ConcurrentDenseMap<std::type_index, EventId> ids;
    return ids;
}
} // namespace

void detail::registerRuntimeEventId(std::type_index type, EventIdView eventId) {
    runtimeEventIds().lazy_emplace_l(
        type,
        [](auto&&...) {},
        [&](auto const& ctor) { ctor(type, eventId); }
    );
}

void Event::serialize(CompoundTag& nbt) const { nbt["eventId"] = getId().name; }

void Event::serializeWithCancel(CompoundTag& nbt) const { nbt["cancelled"] = mCancelled; }

void Event::deserialize(CompoundTag const&) {}

EventId Event::getId() const {
    EventId result{EmptyEventId};
    runtimeEventIds().if_contains(std::type_index{typeid(*this)}, [&](auto const& pair) { result = pair.second; });
    if (result != EmptyEventId) {
        return result;
    }
    return EventId{reflection::removeTypePrefix(reflection::getDynamicRawName(*this))};
}

void Event::deserializeWithCancel(CompoundTag const& nbt) { mCancelled = nbt["cancelled"]; }

} // namespace ll::event
