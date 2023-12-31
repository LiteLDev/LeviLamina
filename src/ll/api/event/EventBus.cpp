#include "ll/api/event/EventBus.h"

#include <mutex>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/Logger.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/EmitterBase.h"
#include "ll/api/thread/SharedRecursiveMutex.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/utils/StacktraceUtils.h"

namespace ll::event {

std::atomic_ullong ListenerBase::listenerId{0};

class CallbackStream {
    struct ListenerComparator {
        bool operator()(ListenerPtr const& lhs, ListenerPtr const& rhs) const { return *lhs < *rhs; }
    };

    std::set<ListenerPtr, ListenerComparator> listeners;
    ll::thread::SharedRecursiveMutex          mutex;

public:
    std::unique_ptr<EmitterBase> emitter;

    [[nodiscard]] size_t count() const { return listeners.size(); }

    void publish(Event& event) {
        std::shared_lock                      lock(mutex);
        static stacktrace_utils::SymbolLoader a{};
        for (auto& l : listeners) {
            try {
                l->call(event);
            } catch (...) {
                auto llock = ll::Logger::lock();
                try {
                    logger.error(
                        "Error in [{}:{}] of <{}>:",
                        ll::reflection::removeTypePrefix(ll::reflection::getDynamicRawName(*l)),
                        l->getId(),
                        l->pluginPtr.expired() ? "unknown plugin" : l->pluginPtr.lock()->getManifest().name
                    );
                } catch (...) {}
                error_info::printCurrentException();
                logger.error("\n{}", stacktrace_utils::toString(error_info::stacktraceFromCurrExc()));
            }
        }
    }
    void publish(std::string_view pluginName, Event& event) {
        std::shared_lock lock(mutex);
        for (auto& l : listeners) {
            auto ptr = l->pluginPtr.lock();
            if (!ptr || ptr->getManifest().name != pluginName) {
                continue;
            }
            try {
                l->call(event);
            } catch (...) {
                auto llock = ll::Logger::lock();
                try {
                    logger.error(
                        "Error in [{}:{}] of <{}>:",
                        ll::reflection::removeTypePrefix(ll::reflection::getDynamicRawName(*l)),
                        l->getId(),
                        pluginName
                    );
                } catch (...) {}
                error_info::printCurrentException();
            }
        }
    }
    bool addListener(ListenerPtr const& listener) {
        std::shared_lock lock(mutex);
        return listeners.insert(listener).second;
    }

    bool removeListener(ListenerPtr const& listener) {
        std::lock_guard lock(mutex);
        return listeners.erase(listener);
    }

    [[nodiscard]] bool empty() const { return listeners.empty(); }
};

class EventBus::EventBusImpl {
public:
    std::unordered_map<EventId, std::function<std::unique_ptr<EmitterBase>(ListenerBase&)>> emitterFactory;

    std::unordered_map<EventId, CallbackStream> streams;

    std::recursive_mutex mutex;

    struct ListenerInfo {
        std::weak_ptr<ListenerBase> listener;
        std::unordered_set<EventId> watches;
    };

    std::unordered_map<ListenerId, ListenerInfo> listeners;

    bool addListener(ListenerPtr const& listener, EventId eventId) {
        if (auto i = streams.find(eventId); i != streams.end()) {
            return i->second.addListener(listener);
        } else {
            if (streams[eventId].addListener(listener)) {
                if (auto fac = emitterFactory.find(listener->factoryId(eventId)); fac != emitterFactory.end()) {
                    streams[eventId].emitter = fac->second(*listener);
                    return true;
                }
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
    optional_ref<CallbackStream> callback = nullptr;
    {
        std::lock_guard lock(impl->mutex);
        if (auto i = impl->streams.find(eventId); i != impl->streams.end()) {
            callback = i->second;
        } else {
            return;
        }
    }
    callback->publish(event);
}
void EventBus::publish(std::string_view pluginName, Event& event, EventId eventId) {
    optional_ref<CallbackStream> callback = nullptr;
    {
        std::lock_guard lock(impl->mutex);
        if (auto i = impl->streams.find(eventId); i != impl->streams.end()) {
            callback = i->second;
        } else {
            return;
        }
    }
    callback->publish(pluginName, event);
}
size_t EventBus::getListenerCount(EventId eventId) {
    if (auto i = impl->streams.find(eventId); i != impl->streams.end()) {
        return i->second.count();
    }
    return 0;
}
bool EventBus::addListener(ListenerPtr const& listener, EventId eventId) {
    if (!listener) {
        return false;
    }
    std::lock_guard lock(impl->mutex);
    if (impl->addListener(listener, eventId)) {
        auto& info    = impl->listeners[listener->getId()];
        info.listener = listener;
        info.watches.emplace(eventId);
        return true;
    }
    return false;
}
bool EventBus::removeListener(ListenerPtr const& listener, EventId eventId) {
    if (!listener) {
        return false;
    }
    bool            res = false;
    std::lock_guard lock(impl->mutex);
    if (eventId == EmptyEventId) {
        auto& watches = impl->listeners[listener->getId()].watches;
        for (auto& eid : watches) {
            res |= impl->removeListener(listener, eid);
        }
        impl->listeners.erase(listener->getId());
    } else {
        res = impl->removeListener(listener, eventId);
        if (res) {
            auto& watches = impl->listeners[listener->getId()].watches;
            watches.erase(eventId);
            if (watches.empty()) {
                impl->listeners.erase(listener->getId());
            }
        }
    }
    return res;
}
ListenerPtr EventBus::getListener(ListenerId id) const {
    std::lock_guard lock(impl->mutex);
    if (!impl->listeners.contains(id)) {
        return nullptr;
    }
    return impl->listeners[id].listener.lock();
}
bool EventBus::hasListener(ListenerId id, EventId eventId) const {
    std::lock_guard lock(impl->mutex);
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
