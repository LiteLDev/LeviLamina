#pragma once

#include <memory>

#include "ll/api/base/StdInt.h"
#include "ll/api/event/EventId.h"
#include "ll/api/plugin/NativePlugin.h"

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
    friend CallbackStream;
    friend EventBus;
    ListenerId    id;
    EventPriority priority;

protected:
    LLAPI explicit ListenerBase(
        EventPriority                 priority,
        std::weak_ptr<plugin::Plugin> plugin = plugin::NativePlugin::current()
    );

public:
    std::weak_ptr<plugin::Plugin> pluginPtr;

    ListenerBase(ListenerBase&&)                 = delete;
    ListenerBase(ListenerBase const&)            = delete;
    ListenerBase& operator=(ListenerBase&&)      = delete;
    ListenerBase& operator=(ListenerBase const&) = delete;

    [[nodiscard]] constexpr ListenerId    getId() const { return id; }
    [[nodiscard]] constexpr EventPriority getPriority() const { return priority; }

    [[nodiscard]] constexpr bool operator==(ListenerBase const& other) const noexcept { return id == other.id; }
    [[nodiscard]] constexpr bool operator!=(ListenerBase const& other) const noexcept { return id != other.id; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ListenerBase const& other) const noexcept {
        if (priority != other.priority) {
            return priority <=> other.priority;
        }
        return id <=> other.id;
    }

    virtual ~ListenerBase() = default;

    virtual void call(Event& event) = 0;
};

using ListenerPtr = std::shared_ptr<ListenerBase>;
} // namespace ll::event
