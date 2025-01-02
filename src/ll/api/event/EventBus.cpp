#include "ll/api/event/EventBus.h"

#include <mutex>

#include "ll/api/event/EmitterBase.h"
#include "ll/api/io/Logger.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::event {

class CallbackStream {
    struct ListenerComparator {
        bool operator()(ListenerPtr const& lhs, ListenerPtr const& rhs) const { return *lhs < *rhs; }
    };
    std::mutex                                  mutex;
    OrderedSet<ListenerPtr, ListenerComparator> listeners;

public:
    std::unique_ptr<EmitterBase> emitter;

    CallbackStream(std::unique_ptr<EmitterBase> emitter) : emitter(std::move(emitter)) {}

    void publish(Event& event) {
        std::vector<ListenerPtr> tempList;
        {
            std::lock_guard lock(mutex);
            tempList.reserve(listeners.size());
            tempList.assign_range(listeners);
        }
        for (auto& l : tempList) {
            try {
                l->call(event);
            } catch (...) {
                try {
                    getLogger().error(
                        "Error in Listener<{}>[{}] of {}:",
                        event.getId().name,
                        l->getId(),
                        l->modPtr.expired() ? "unknown mod" : l->modPtr.lock()->getName()
                    );
                } catch (...) {}
                error_utils::printCurrentException(getLogger());
            }
        }
    }
    void publish(std::string_view modName, Event& event) {
        std::vector<ListenerPtr> tempList;
        {
            std::lock_guard lock(mutex);
            tempList.reserve(listeners.size());
            tempList.assign_range(listeners);
        }
        for (auto& l : tempList) {
            if (l->modPtr.expired()) {
                continue;
            }
            auto ptr = l->modPtr.lock();
            if (!ptr || ptr->getName() != modName) {
                continue;
            }
            try {
                l->call(event);
            } catch (...) {
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
    auto removeAllListeners() {
        std::lock_guard lock(mutex);
        return std::move(listeners);
    }
    [[nodiscard]] size_t count() const { return listeners.size(); }
    [[nodiscard]] bool   empty() const { return listeners.empty(); }
};

class EventStorage {
    EventBus::FactoryFn             factory;
    std::shared_ptr<CallbackStream> stream;

public:
    EventStorage(EventBus::FactoryFn factory) : factory(std::move(factory)) {}

    optional_ref<CallbackStream> getStream() const { return stream.get(); }

    auto& getSharedStream() const { return stream; }

    void removeStream() { stream.reset(); }

    CallbackStream& getOrCreateStream() {
        if (!stream) {
            stream = std::make_shared<CallbackStream>(factory());
        }
        return *stream;
    }
};
struct ModInfo {
    std::vector<EventId>      ownedEvents;
    SmallDenseSet<ListenerId> listeners;
};
struct ListenerInfo {
    std::weak_ptr<ListenerBase> weak;
    SmallDenseSet<EventId>      attachedEvents;
};

class EventBus::EventBusImpl {
public:
    ConcurrentDenseMap<EventId, EventStorage> events;

    std::recursive_mutex               infoMutex;
    DenseMap<std::string, ModInfo>     modInfos;
    DenseMap<ListenerId, ListenerInfo> listenerInfos;

    bool removeListenerImpl(ListenerPtr const& listener, EventIdView const& eventId) {
        bool result{false};
        events.modify_if(eventId, [&](auto& pair) {
            if (pair.second.getStream()
                    .transform([&](CallbackStream& stream) { return stream.removeListener(listener); })
                    .value_or(false)) {
                if (pair.second.getStream()->empty()) {
                    pair.second.removeStream();
                }
                result = true;
            }
        });
        return result;
    }
};

EventBus::EventBus() : impl(std::make_unique<EventBusImpl>()) {
    auto& reg = mod::ModManagerRegistry::getInstance();
    reg.executeOnModUnload([this](std::string_view name) { clearMod(name); });
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
bool EventBus::setEventEmitter(FactoryFn fn, EventIdView const& eventId, std::weak_ptr<mod::Mod> weakMod) {
    if (auto mod = weakMod.lock(); mod) {
        std::lock_guard lock(impl->infoMutex);
        return impl->events.lazy_emplace_l(
            eventId,
            [](auto&&...) {},
            [&](auto const& ctor) {
                ctor(eventId, std::move(fn));
                impl->modInfos[mod->getName()].ownedEvents.emplace_back(eventId);
            }
        );
    }
    return false;
}
void EventBus::publish(Event& event, EventIdView const& eventId) {
    std::shared_ptr<CallbackStream> stream;
    impl->events.if_contains(eventId, [&](auto& pair) { stream = pair.second.getSharedStream(); });
    if (stream) {
        stream->publish(event);
    }
}
void EventBus::publish(std::string_view modName, Event& event, EventIdView const& eventId) {
    std::shared_ptr<CallbackStream> stream;
    impl->events.if_contains(eventId, [&](auto& pair) { stream = pair.second.getSharedStream(); });
    if (stream) {
        stream->publish(modName, event);
    }
}

coro::Generator<EventIdView> EventBus::events(std::string_view modName) const {
    std::lock_guard lock(impl->infoMutex);
    if (auto it = impl->modInfos.find(modName); it != impl->modInfos.end()) {
        for (auto& id : it->second.ownedEvents) {
            co_yield id;
        }
    }
}

coro::Generator<std::pair<std::string_view, EventIdView>> EventBus::events() const {
    std::lock_guard lock(impl->infoMutex);
    for (auto& [name, info] : impl->modInfos) {
        for (auto& id : info.ownedEvents) {
            co_yield {name, id};
        }
    }
}

bool EventBus::hasEvent(EventIdView const& eventId) const { return impl->events.contains(eventId); }

size_t EventBus::getListenerCount(EventIdView const& eventId) {
    if (eventId == EmptyEventId) {
        return impl->listenerInfos.size();
    }
    size_t result{0};
    impl->events.if_contains(eventId, [&](auto& pair) {
        pair.second.getStream().transform([&](CallbackStream& stream) {
            result = stream.count();
            return true;
        });
    });
    return result;
}
bool EventBus::addListener(ListenerPtr const& listener, EventIdView const& eventId) {
    if (!listener || eventId == EmptyEventId) {
        return false;
    }
    auto mod = listener->modPtr.lock();
    if (!mod) {
        return false;
    }
    bool            result{false};
    std::lock_guard lock(impl->infoMutex);
    impl->events.modify_if(eventId, [&](auto& pair) {
        result = pair.second.getOrCreateStream().addListener(listener);
    });
    if (result) {
        auto id = listener->getId();
        impl->modInfos[mod->getName()].listeners.emplace(id);
        impl->listenerInfos.lazy_emplace(
                               id,
                               [&](auto const& ctor) { ctor(id, listener); }
        )->second.attachedEvents.emplace(eventId);
    }
    return result;
}
bool EventBus::removeListener(ListenerPtr const& listener, EventIdView const& eventId) {
    if (!listener) {
        return false;
    }
    auto mod = listener->modPtr.lock();
    if (!mod) {
        return false;
    }
    auto            id = listener->getId();
    bool            result{false};
    std::lock_guard lock(impl->infoMutex);
    if (impl->listenerInfos.erase_if(id, [&](auto& pair) {
            auto& listenerInfo = pair.second;
            if (eventId == EmptyEventId) {
                for (auto& event : listenerInfo.attachedEvents) {
                    impl->removeListenerImpl(listener, event);
                }
                result = true;
                return true;
            } else if (listenerInfo.attachedEvents.contains(eventId)) {
                impl->removeListenerImpl(listener, eventId);
                listenerInfo.attachedEvents.erase(eventId);
                result = true;
            }
            return listenerInfo.attachedEvents.empty();
        })) {
        impl->modInfos[mod->getName()].listeners.erase(id);
    }
    return result;
}
ListenerPtr EventBus::getListener(ListenerId id) const {
    std::lock_guard lock(impl->infoMutex);
    ListenerPtr     result;
    impl->listenerInfos.if_contains(id, [&](auto& pair) { result = pair.second.weak.lock(); });
    return result;
}
bool EventBus::hasListener(ListenerId id, EventIdView const& eventId) const {
    std::lock_guard lock(impl->infoMutex);
    if (!impl->listenerInfos.contains(id)) {
        return false;
    }
    if (eventId == EmptyEventId) {
        return true;
    } else {
        return impl->listenerInfos.at(id).attachedEvents.contains(eventId);
    }
}
void EventBus::removeModListeners(std::string_view modName) {
    std::lock_guard lock(impl->infoMutex);
    impl->modInfos.modify_if(modName, [&](auto& pair) {
        auto tempList = std::vector(pair.second.listeners.begin(), pair.second.listeners.end());
        for (auto& id : tempList) {
            removeListener(getListener(id));
        }
    });
}
void EventBus::clearMod(std::string_view modName) {
    std::lock_guard lock(impl->infoMutex);
    impl->modInfos.erase_if(modName, [&](auto& pair) {
        removeModListeners(modName);
        for (auto& eventId : pair.second.ownedEvents) {
            impl->events.erase_if(eventId, [&](auto& epair) {
                epair.second.getStream().transform([&](auto& stream) {
                    for (auto& listener : stream.removeAllListeners()) {
                        impl->listenerInfos.erase_if(listener->getId(), [&](auto& lpair) {
                            lpair.second.attachedEvents.erase(eventId);
                            return lpair.second.attachedEvents.empty();
                        });
                    }
                    return true;
                });
                return true;
            });
        }
        return true;
    });
}
} // namespace ll::event
