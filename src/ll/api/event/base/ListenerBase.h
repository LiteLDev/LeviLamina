#pragma once

#include "ll/api/base/StdInt.h"
#include "ll/api/event/base/EventBase.h"

namespace ll::event {
class EventRegistry;

enum class EventPriority {
    Highest = 0,
    High    = 100,
    Normal  = 200,
    Low     = 300,
    Lowest  = 400,
};

class ListenerBase {
    friend EventRegistry;
    EventPriority priority;
    uint          id{};
    void          setId(uint i) { id = i; }

protected:
    constexpr explicit ListenerBase(EventPriority priority) : priority(priority) {}

public:
    [[nodiscard]] constexpr uint          getId() const { return id; }
    [[nodiscard]] constexpr EventPriority getPriority() const { return priority; }

    [[nodiscard]] constexpr bool operator==(ListenerBase const& other) const noexcept { return id == other.id; }
    [[nodiscard]] constexpr bool operator!=(ListenerBase const& other) const noexcept { return id != other.id; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ListenerBase const& other) const noexcept {
        if (priority != other.priority) { return priority <=> other.priority; }
        return id <=> other.id;
    }

    virtual ~ListenerBase() = default;

    virtual void call(EventBase& event) = 0;
};
} // namespace ll::event