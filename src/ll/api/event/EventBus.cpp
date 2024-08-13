#include "ll/api/event/EventBus.h"

#include <mutex>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/Logger.h"
#include "ll/api/event/EmitterBase.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::event {

class CallbackStream {
    struct ListenerComparator {
        bool operator()(ListenerPtr const& lhs, ListenerPtr const& rhs) const { return *lhs < *rhs; }
    };

    std::set<ListenerPtr, ListenerComparator> listeners;
    std::recursive_mutex                      mutex;

public:
    std::unique_ptr<EmitterBase> emitter;

    [[nodiscard]] size_t count() const { return listeners.size(); }

    void publish(Event& event) {
        std::lock_guard lock(mutex);
        for (auto& l : listeners) {
            try {
                l->call(event);
            } catch (...) {
                auto llock = ll::Logger::lock();
                try {
                    getLogger().error(
                        "Error in Listener<{}>[{}] of {}:",
                        event.getId().name,
                        l->getId(),
                        l->modPtr.expired() ? "unknown mod" : l->modPtr.lock()->getManifest().name
                    );
                } catch (...) {}
                error_utils::printCurrentException(getLogger());
            }
        }
    }
    void publish(std::string_view modName, Event& event) {
        std::lock_guard lock(mutex);
        for (auto& l : listeners) {
            if (l->modPtr.expired()) {
                continue;
            }
            auto ptr = l->modPtr.lock();
            if (!ptr || ptr->getManifest().name != modName) {
                continue;
            }
            try {
                l->call(event);
            } catch (...) {
                auto llock = ll::Logger::lock();
                try {
                    getLogger().error("Error in Listener<{}>[{}] of {}:", event.getId().name, l->getId(), modName);
                } catch (...) {}
                error_utils::printCurrentException(getLogger());
            }
        }
    }
    bool addListener(ListenerPtr const& listener) {
        std::lock_guard lock(mutex);
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
    struct Factory {
        std::function<std::unique_ptr<EmitterBase>(ListenerBase&)> func;
        std::weak_ptr<ll::mod::Mod>                                mod;
    };

    std::unordered_map<EventId, Factory> emitterFactory;

    std::unordered_map<EventId, CallbackStream> streams;

    std::recursive_mutex mutex;

    struct ListenerInfo {
        std::weak_ptr<ll::mod::Mod> mod;
        std::weak_ptr<ListenerBase> listener;
        std::unordered_set<EventId> watches;
    };

    std::unordered_map<ListenerId, ListenerInfo> listeners;

    bool addListener(ListenerPtr const& listener, EventId eventId) {
        if (auto i = streams.find(eventId); i != streams.end()) {
            return i->second.addListener(listener);
        } else {
            if (streams[eventId].addListener(listener)) {
                if (auto fac = emitterFactory.find(eventId); fac != emitterFactory.end()) {
                    streams[eventId].emitter = fac->second.func(*listener);
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

EventBus::EventBus() : impl(std::make_unique<EventBusImpl>()) {
    auto& reg = mod::ModManagerRegistry::getInstance();
    reg.executeOnModUnload([this](std::string_view name) { removeModEventEmitters(name); });
    reg.executeOnModDisable([this](std::string_view name) {
        if (getGamingStatus() == GamingStatus::Running) {
            removeModListeners(name);
        }
    });
}

EventBus& EventBus::getInstance() {
    static EventBus instance;
    return instance;
}
void EventBus::setEventEmitter(
    std::function<std::unique_ptr<EmitterBase>(ListenerBase&)> fn,
    EventId                                                    eventId,
    std::weak_ptr<mod::Mod>                                    mod
) {
    std::lock_guard lock(impl->mutex);

    impl->emitterFactory.try_emplace(eventId, std::move(fn), std::move(mod));
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
void EventBus::publish(std::string_view modName, Event& event, EventId eventId) {
    optional_ref<CallbackStream> callback = nullptr;
    {
        std::lock_guard lock(impl->mutex);
        if (auto i = impl->streams.find(eventId); i != impl->streams.end()) {
            callback = i->second;
        } else {
            return;
        }
    }
    callback->publish(modName, event);
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
        info.mod      = listener->modPtr;
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
size_t EventBus::removeModListeners(std::string_view modName) {
    std::lock_guard lock(impl->mutex);
    size_t          count{};
    for (auto& [id, listener] : impl->listeners) {
        if (listener.mod.expired()) {
            count += removeListener(id);
            continue;
        }
        if (auto mod = listener.mod.lock()) {
            if (mod->getManifest().name != modName) {
                continue;
            }
        }
        count += removeListener(id);
    }
    return count;
}
size_t EventBus::removeModEventEmitters(std::string_view modName) {
    std::lock_guard lock(impl->mutex);
    size_t          count{};
    for (auto& [id, factory] : impl->emitterFactory) {
        if (factory.mod.expired()) {
            count += impl->emitterFactory.erase(id);
        }
        if (auto mod = factory.mod.lock()) {
            if (mod->getManifest().name != modName) {
                continue;
            }
        }
        count += impl->emitterFactory.erase(id);
    }
    return count;
}
} // namespace ll::event
