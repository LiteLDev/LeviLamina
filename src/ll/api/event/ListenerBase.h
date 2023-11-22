#pragma once

#include <memory>

#include "ll/api/base/StdInt.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::event {
class EventBus;
class Event;

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
    ListenerId                    id{};
    EventPriority                 priority;
    std::weak_ptr<plugin::Plugin> pluginPtr;

    void setId(ListenerId i) { id = i; }

protected:
    explicit ListenerBase(
        EventPriority                        priority,
        std::weak_ptr<plugin::Plugin> const& plugin = plugin::Plugin::current().weak_from_this()
    )
    : priority(priority),
      pluginPtr(plugin) {}

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

    virtual std::unique_ptr<Emitter> getEmitter() { return nullptr; }
};

using ListenerPtr = std::shared_ptr<ListenerBase>;
} // namespace ll::event
