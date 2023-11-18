#include "ll/api/event/EventBus.h"

#include <mutex>
#include <set>
#include <unordered_map>
#include <unordered_set>

namespace ll::event {

class CallbackStream {
    struct ListenerComparator {
        using Type = std::shared_ptr<ListenerBase>;
        bool operator()(Type const& lhs, Type const& rhs) const { return *lhs < *rhs; }
    };

    std::set<std::shared_ptr<ListenerBase>, ListenerComparator> listeners;

public:
    void publish(Event& event) {
        for (auto& l : listeners) { l->call(event); }
    }
    bool addListener(std::shared_ptr<ListenerBase> const& listener) { return listeners.insert(listener).second; }

    bool removeListener(std::shared_ptr<ListenerBase> const& listener) { return listeners.erase(listener); }

    [[nodiscard]] bool empty() const { return listeners.empty(); }
};

class EventBus::EventBusImpl {
    std::atomic_uint lid{};

public:
    std::unordered_map<EventId, CallbackStream> streams;

    std::recursive_mutex mutex;

    struct ListenerInfo {
        std::weak_ptr<ListenerBase> listener;
        std::unordered_set<EventId> watches;
    };

    std::unordered_map<uint, ListenerInfo> listeners;

    uint getNewListenerId() { return ++lid; }

    bool removeListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId) {
        if (streams.contains(eventId) && streams.at(eventId).removeListener(listener)) {
            if (streams.at(eventId).empty()) { streams.erase(eventId); }
            return true;
        }
        return false;
    }
};

EventBus::EventBus() : impl(std::make_unique<EventBusImpl>()) {}

EventBus& EventBus::getInstance() {
    static EventBus instance;
    return instance;
}

void EventBus::publish(Event& event, EventId const& eventId) {
    std::lock_guard lock(impl->mutex);
    impl->streams[eventId].publish(event);
}

bool EventBus::addListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId) {
    std::lock_guard lock(impl->mutex);
    if (listener->getId() == 0) { listener->setId(impl->getNewListenerId()); }
    auto& info    = impl->listeners[listener->getId()];
    info.listener = listener;
    info.watches.emplace(eventId);
    return impl->streams[eventId].addListener(listener);
}
bool EventBus::removeListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId) {
    std::lock_guard lock(impl->mutex);
    auto&           watches = impl->listeners[listener->getId()].watches;
    if (eventId == EmptyEventId) {
        bool res = false;
        for (auto& eid : watches) { res |= impl->removeListener(listener, eid); }
        impl->listeners.erase(listener->getId());
        return res;
    } else {
        watches.erase(eventId);
        if (watches.empty()) { impl->listeners.erase(listener->getId()); }
        return impl->removeListener(listener, eventId);
    }
}
bool EventBus::hasListener(uint id, EventId const& eventId) const {
    std::lock_guard lock(impl->mutex);
    if (!impl->listeners.contains(id)) { return false; }
    if (eventId == EmptyEventId) {
        return true;
    } else {
        return impl->listeners[id].watches.contains(eventId);
    }
}
bool EventBus::removeListener(uint id, EventId const& eventId) {
    auto listener = impl->listeners[id].listener.lock();
    return removeListener(listener, eventId);
}
bool EventBus::hasListener(std::shared_ptr<ListenerBase> const& listener, EventId const& eventId) const {
    return hasListener(listener->getId(), eventId);
}

} // namespace ll::event
