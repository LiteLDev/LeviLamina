#include "ll/api/event/EventBus.h"

#include <mutex>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/Logger.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/EmitterBase.h"
#include "ll/api/thread/SharedRecursiveMutex.h"

namespace ll::event {
static Logger eventBusLogger("EventBus");

class CallbackStream {
    struct ListenerComparator {
        bool operator()(ListenerPtr const& lhs, ListenerPtr const& rhs) const { return *lhs < *rhs; }
    };

    std::set<ListenerPtr, ListenerComparator> listeners;

public:
    std::unique_ptr<EmitterBase> emitter;

    [[nodiscard]] size_t count() const { return listeners.size(); }

    void publish(Event& event) {
        for (auto& l : listeners) {
            try {
                l->call(event);
            } catch (...) {
                auto lock = ll::Logger::lock();
                try {
                    auto& weak = l->pluginPtr;
                    eventBusLogger.error(
                        "Error in [{}:{}] of <{}>:",
                        ll::reflection::removeTypePrefix(typeid(*l).name()),
                        l->getId(),
                        weak.expired() ? "unknown plugin" : weak.lock()->getManifest().name
                    );
                } catch (...) {}
                error_info::printCurrentException(eventBusLogger);
            }
        }
    }
    bool addListener(ListenerPtr const& listener) { return listeners.insert(listener).second; }

    bool removeListener(ListenerPtr const& listener) { return listeners.erase(listener); }

    [[nodiscard]] bool empty() const { return listeners.empty(); }
};

class EventBus::EventBusImpl {
    std::atomic<ListenerId> lid{};

public:
    std::unordered_map<EventId, std::function<std::unique_ptr<EmitterBase>(ListenerBase&)>> emitterFactory;

    std::unordered_map<EventId, CallbackStream> streams;

    ll::thread::SharedRecursiveMutex mutex;

    struct ListenerInfo {
        std::weak_ptr<ListenerBase> listener;
        std::unordered_set<EventId> watches;
    };

    std::unordered_map<ListenerId, ListenerInfo> listeners;

    ListenerId getNewListenerId() { return ++lid; }

    bool addListener(ListenerPtr const& listener, EventId eventId) {
        if (auto i = streams.find(eventId); i != streams.end()) {
            return i->second.addListener(listener);
        } else {
            if (streams[eventId].addListener(listener)) {
                if (auto fac = emitterFactory.find(listener->factoryId(eventId)); fac != emitterFactory.end()) {
                    streams[eventId].emitter = fac->second(*listener);
                }
                return true;
            }
            return false;
        }
    }

    bool removeListener(ListenerPtr const& listener, EventId eventId) {
        if (auto i = streams.find(eventId); i != streams.end()) {
            auto& stream = i->second;
            if (stream.removeListener(listener)) {
                if (stream.empty()) {
                    streams.erase(i);
                }
                return true;
            }
        }
        return false;
    }
};

EventBus::EventBus() : impl(std::make_unique<EventBusImpl>()) {}

EventBus& EventBus::getInstance() {
    static EventBus instance;
    return instance;
}
void EventBus::setEventEmitter(std::function<std::unique_ptr<EmitterBase>(ListenerBase&)> fn, EventId eventId) {
    std::lock_guard lock(impl->mutex);
    impl->emitterFactory[eventId] = std::move(fn);
}
void EventBus::publish(Event& event, EventId eventId) {
    std::shared_lock lock(impl->mutex);

    if (auto i = impl->streams.find(eventId); i != impl->streams.end()) {
        i->second.publish(event);
    }
}
size_t EventBus::getListenerCount(EventId eventId) {
    std::shared_lock lock(impl->mutex);
    if (auto i = impl->streams.find(eventId); i != impl->streams.end()) {
        return i->second.count();
    }
    return 0;
}
bool EventBus::addListener(ListenerPtr const& listener, EventId eventId, Canneller& canneller) {
    if (!listener) {
        return false;
    }
    std::lock_guard lock(impl->mutex);
    if (listener->getId() == 0) {
        listener->setId(impl->getNewListenerId());
    }
    if (impl->addListener(listener, eventId)) {
        auto& info    = impl->listeners[listener->getId()];
        info.listener = listener;
        info.watches.emplace(eventId);
        canneller.listeners.emplace(listener->getId());
        return true;
    }
    return false;
}
bool EventBus::removeListener(ListenerPtr const& listener, EventId eventId, Canneller& canneller) {
    if (!listener) {
        return false;
    }
    std::lock_guard lock(impl->mutex);
    auto&           watches = impl->listeners[listener->getId()].watches;
    bool            res     = false;
    if (eventId == EmptyEventId) {
        for (auto& eid : watches) {
            res |= impl->removeListener(listener, eid);
        }
        impl->listeners.erase(listener->getId());
        canneller.listeners.erase(listener->getId());
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
    if (id == 0) {
        return nullptr;
    }
    std::shared_lock lock(impl->mutex);
    if (!impl->listeners.contains(id)) {
        return nullptr;
    }
    return impl->listeners[id].listener.lock();
}
bool EventBus::hasListener(ListenerId id, EventId eventId) const {
    if (id == 0) {
        return false;
    }
    std::shared_lock lock(impl->mutex);
    if (!impl->listeners.contains(id)) {
        return false;
    }
    if (eventId == EmptyEventId) {
        return true;
    } else {
        return impl->listeners[id].watches.contains(eventId);
    }
}
} // namespace ll::event
