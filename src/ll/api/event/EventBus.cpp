#include "ll/api/event/EventBus.h"

#include <mutex>
#include <set>
#include <unordered_map>
#include <unordered_set>

namespace ll::event {

class CallbackStream {
    struct ListenerComparator {
        bool operator()(ListenerPtr const& lhs, ListenerPtr const& rhs) const {
            return *lhs < *rhs;
        }
    };

    std::set<ListenerPtr, ListenerComparator> listeners;

public:
    // std::function<void()> tryHook;

    void publish(Event& event) {
        for (auto& l : listeners) { l->call(event); }
    }
    bool addListener(ListenerPtr const& listener) {
        // if (tryHook) { tryHook(); }
        return listeners.insert(listener).second;
    }

    bool removeListener(ListenerPtr const& listener) { return listeners.erase(listener); }

    [[nodiscard]] bool empty() const { return listeners.empty(); }
};

class EventBus::EventBusImpl {
    std::atomic<ListenerId> lid{};

public:
    std::unordered_map<EventId, CallbackStream> streams;

    std::recursive_mutex mutex;

    struct ListenerInfo {
        std::weak_ptr<ListenerBase> listener;
        std::unordered_set<EventId> watches;
    };

    std::unordered_map<ListenerId, ListenerInfo> listeners;

    ListenerId getNewListenerId() { return ++lid; }

    bool removeListener(ListenerPtr const& listener, EventId const& eventId) {
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
// void EventBus::registerDelayHook(std::function<void()> const& fn, EventId const& eventId) {
//     std::lock_guard lock(impl->mutex);
//     impl->streams[eventId].tryHook = fn;
// }
bool EventBus::addListener(ListenerPtr const& listener, EventId const& eventId, Canneller& canneller) {
    if (!listener) { return false; }
    std::lock_guard lock(impl->mutex);
    if (listener->getId() == 0) { listener->setId(impl->getNewListenerId()); }
    auto& info    = impl->listeners[listener->getId()];
    info.listener = listener;
    if (impl->streams[eventId].addListener(listener)) {
        info.watches.emplace(eventId);
        canneller.listeners.emplace(listener->getId());
        return true;
    }
    return false;
}
bool EventBus::removeListener(ListenerPtr const& listener, EventId const& eventId, Canneller& canneller) {
    if (!listener) { return false; }
    std::lock_guard lock(impl->mutex);
    auto&           watches = impl->listeners[listener->getId()].watches;
    bool            res     = false;
    if (eventId == EmptyEventId) {
        for (auto& eid : watches) { res |= impl->removeListener(listener, eid); }
        impl->listeners.erase(listener->getId());
        canneller.listeners.emplace(listener->getId());
    } else {
        res = impl->removeListener(listener, eventId);
        if (res) {
            watches.erase(eventId);
            if (watches.empty()) {
                impl->listeners.erase(listener->getId());
                canneller.listeners.erase(listener->getId());
            }
        }
    }
    return res;
}
ListenerPtr EventBus::getListener(ListenerId id) const {
    if (id == 0) { return nullptr; }
    std::lock_guard lock(impl->mutex);
    if (!impl->listeners.contains(id)) { return nullptr; }
    return impl->listeners[id].listener.lock();
}
bool EventBus::hasListener(ListenerId id, EventId const& eventId) const {
    if (id == 0) { return false; }
    std::lock_guard lock(impl->mutex);
    if (!impl->listeners.contains(id)) { return false; }
    if (eventId == EmptyEventId) {
        return true;
    } else {
        return impl->listeners[id].watches.contains(eventId);
    }
}
} // namespace ll::event
