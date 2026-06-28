#pragma once

#include <concepts>
#include <typeindex>
#include <type_traits>

#include "ll/api/base/Macro.h"
#include "ll/api/event/EventId.h"

class CompoundTag;

namespace ll::event {
template <class T>
class Cancellable;
class CallbackStream;

class Event {
private:
    template <class T>
    friend class ::ll::event::Cancellable;

    friend class CallbackStream;

    bool mCancelled{false};

    LLAPI void serializeWithCancel(CompoundTag&) const;
    LLAPI void deserializeWithCancel(CompoundTag const&);

protected:
    constexpr Event() = default;

public:
    LLAPI virtual ~Event() = default;

    LLAPI virtual void serialize(CompoundTag&) const;
    LLAPI virtual void deserialize(CompoundTag const&);

    LLAPI virtual EventId getId() const;

    static constexpr EventIdView CustomEventId{EmptyEventId};
};

namespace detail {
LLAPI void registerRuntimeEventId(std::type_index type, EventIdView eventId);

template <class T>
    requires std::derived_from<std::remove_cvref_t<T>, Event>
void registerRuntimeEventId() {
    using EventType = std::remove_cvref_t<T>;
    static const bool registered = [] {
        registerRuntimeEventId(std::type_index{typeid(EventType)}, getEventId<EventType>);
        return true;
    }();
    static_cast<void>(registered);
}
} // namespace detail
} // namespace ll::event
