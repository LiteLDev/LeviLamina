#pragma once

#include <memory>

#include "ll/api/base/StdInt.h"
#include "ll/api/event/EventId.h"

namespace ll::event {
class EventBus;
class Event;
class CallbackStream;

enum class EventPriority {
    Highest = 0,
    High    = 100,
    Normal  = 200,
    Low     = 300,
    Lowest  = 400,
};

using ListenerId = uint64;

class ListenerBase {
    LLAPI static std::atomic_ullong listenerId;

    friend CallbackStream;
    ListenerId    id;
    EventPriority priority;

protected:
    explicit ListenerBase(EventPriority priority) : id(listenerId++), priority(priority) {}

public:
    ListenerBase(ListenerBase&&)                 = delete;
    ListenerBase(ListenerBase const&)            = delete;
    ListenerBase& operator=(ListenerBase&&)      = delete;
    ListenerBase& operator=(ListenerBase const&) = delete;

    [[nodiscard]] ListenerId    getId() const { return id; }
    [[nodiscard]] EventPriority getPriority() const { return priority; }

    [[nodiscard]] bool operator==(ListenerBase const& other) const noexcept { return id == other.id; }
    [[nodiscard]] bool operator!=(ListenerBase const& other) const noexcept { return id != other.id; }

    [[nodiscard]] std::strong_ordering operator<=>(ListenerBase const& other) const noexcept {
        if (priority != other.priority) {
            return priority <=> other.priority;
        }
        return id <=> other.id;
    }

    virtual ~ListenerBase() = default;

    virtual void call(Event& event) = 0;

    virtual EventId factoryId(EventId eid) const { return eid; }
};

using ListenerPtr = std::shared_ptr<ListenerBase>;
} // namespace ll::event
