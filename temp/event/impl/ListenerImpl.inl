#pragma once

/**
 * @brief This file is the implementation of the event listener.
 * @note Only LeviLamina itself should include this file in the source code of event.
 */

#include "ll/core/LeviLamina.h"

#include "ll/api/LoggerAPI.h"
#include "ll/api/event/Listener.h"

namespace ll::event {
namespace detail {

inline int32_t globalListenerId = 0;

/**
 * @brief Get global listener id and +1.
 * @return Current global listener id.
 */
inline int32_t getCurrentListenerId() noexcept { return globalListenerId++; }
/**
 * @brief Log event error.
 * @param msg Error message.
 * @param detail Error detail.
 * @param event Event name.
 * @param listenerId Listener id.
 * @param plugin Plugin handle.
 */
inline void logEventError(
    std::string const& msg,
    std::string const& detail,
    std::string const& event,
    int32_t                listenerId,
    HMODULE            plugin
) {
    std::string pluginName = "[Unknown]";
    if (plugin != nullptr) {
        auto info = ll::getPlugin(plugin);
        if (info != nullptr) {
            pluginName = info->name;
        } else {
            pluginName = GetModuleName(plugin);
        }
    }
    logger.error(msg);
    if (!detail.empty()) {
        for (auto& line : SplitStrWithPattern(detail, "\n")) {
            logger.error(line);
        }
    }
    logger.error("- In event: {}", event);
    logger.error("- In listener: {} (Subscribed by Plugin <{}>)", listenerId, pluginName);
}

} // namespace detail

template <typename EventType>
LL_GETTER_IMPL(Listener<EventType>, int32_t, id, getId);

template <typename EventType>
LL_GETTER_IMPL(Listener<EventType>, EventPriority, priority, getPriority);

template <typename EventType>
LL_GETTER_IMPL(Listener<EventType>, HMODULE, plugin, getPlugin);

template <typename EventType>
LL_GETTER_IMPL(Listener<EventType>, std::function<void(EventType&)>, callback, getCallback);

template <typename EventType>
LL_GETTER_IMPL(Listener<EventType>, int64_t, timing, getTiming);

template <typename EventType>
LL_SETTER_IMPL(Listener<EventType>, int64_t, timing, setTiming)

template <typename EventType>
Listener<EventType>::Listener(std::function<void(EventType&)> callback, EventPriority priority, HMODULE plugin)
: callback(std::move(callback)), priority(priority), id(detail::getCurrentListenerId()), plugin(plugin), timing(-1) {}


template <typename EventType>
void Listener<EventType>::call(EventType& event) {
    try {
        auto start = std::chrono::system_clock::now();
        callback(event);
        auto end     = std::chrono::system_clock::now();
        this->timing = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    } catch (const seh_exception& e) {
        detail::logEventError("SEH Exception Occurred:", e.what(), typeid(EventType).name(), id, plugin);
    } catch (std::exception const& e) {
        detail::logEventError("C++ Exception Occurred:", e.what(), typeid(EventType).name(), id, plugin);
    } catch (...) {
        detail::logEventError("Unknown Exception Occurred:", "", typeid(EventType).name(), id, plugin);
    }
}

template <typename EventType>
void Listener<EventType>::unsubscribe() {
    if (id != -1) {
        EventType::unsubscribe(id);
        id = -1;
    }
}

template <typename EventType>
bool Listener<EventType>::operator==(Listener const& other) const {
    return id == other.id;
}

template <typename EventType>
bool Listener<EventType>::operator<(Listener const& other) const {
    if (this->priority == other.priority) {
        return this->id < other.id;
    }
    return this->priority < other.priority;
}


} // namespace ll::event
