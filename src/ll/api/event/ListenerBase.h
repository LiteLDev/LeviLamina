#pragma once

#include "ll/api/base/StdInt.h"
#include "ll/api/event/Event.h"

namespace ll::event {
class EventBus;

enum class EventPriority {
    Highest = 0,
    High    = 100,
    Normal  = 200,
    Low     = 300,
    Lowest  = 400,
};

using ListenerId = uint64;

class ListenerBase {
    friend EventBus;
    ListenerId    id{};
    EventPriority priority;
    void          setId(ListenerId i) { id = i; }

protected:
    constexpr explicit ListenerBase(EventPriority priority) : priority(priority) {}

public:
    [[nodiscard]] constexpr ListenerId    getId() const { return id; }
    [[nodiscard]] constexpr EventPriority getPriority() const { return priority; }

    [[nodiscard]] constexpr bool operator==(ListenerBase const& other) const noexcept { return id == other.id; }
    [[nodiscard]] constexpr bool operator!=(ListenerBase const& other) const noexcept { return id != other.id; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ListenerBase const& other) const noexcept {
        if (priority != other.priority) { return priority <=> other.priority; }
        return id <=> other.id;
    }

    virtual ~ListenerBase() = default;

    virtual void call(Event& event) = 0;
};

using ListenerPtr = std::shared_ptr<ListenerBase>;
} // namespace ll::event
