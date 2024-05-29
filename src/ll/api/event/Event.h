#pragma once

#include <concepts>

#include "ll/api/base/Macro.h"
#include "ll/api/event/EventId.h"

class CompoundTag;

namespace ll::event {
class Event;
template <std::derived_from<Event> T>
class Cancellable;

class Event {
private:
    template <std::derived_from<Event> T>
    friend class ::ll::event::Cancellable;

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

    static constexpr EventId CustomEventId{EmptyEventId};
};
} // namespace ll::event
