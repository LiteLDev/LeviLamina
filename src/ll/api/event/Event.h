#pragma once

#include <concepts>
#include <memory>

#include "ll/api/event/EmitterBase.h"
#include "ll/api/event/EventId.h"
#include "ll/api/event/ListenerBase.h"

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

    void serializeWithCancell(CompoundTag&) const;
    void deserializeWithCancell(CompoundTag const&);

protected:
    constexpr Event() = default;

public:
    virtual ~Event() = default;

    virtual void serialize(CompoundTag&) const;
    virtual void deserialize(CompoundTag const&);

    static constexpr ll::event::EventId CustomEventId{EmptyEventId};
};
} // namespace ll::event
