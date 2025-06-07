#pragma once

#include <concepts>

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
} // namespace ll::event
