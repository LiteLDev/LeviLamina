#pragma once

#include <functional>

#include "ll/api/LLAPI.h"
#include "ll/api/utils/AccessorMacro.h"

namespace ll::event {

template <typename EventType>
class EventManager;

/**
 * @brief Event priority enum.
 * @details The lower the priority, the earlier the event is executed.
 * @note Don't try forcing to be executed first.
 * @see EventManager::addListener
 */
enum class EventPriority : uchar { Lowest = 0, Low = 1, Normal = 2, High = 3, Highest = 4, Monitor = 5 };

/**
 * @brief Event listener.
 * @tparam EventType Event type.
 */
template <typename EventType>
class Listener {
    LL_RO_MEMBER(int, id, getId);
    LL_RO_MEMBER(EventPriority, priority, getPriority);
    LL_RO_MEMBER(HMODULE, plugin, getPlugin);
    LL_RO_MEMBER(std::function<void(EventType&)>, callback, getCallback);
    LL_RW_MEMBER(int64, timing, getTiming, setTiming);

    friend class EventManager<EventType>;

public:
    LLAPI
    Listener(std::function<void(EventType&)> callback, EventPriority priority, HMODULE plugin = GetCurrentModule());

    /**
     * @brief Call the listener.
     * @param event Event instance
     */
    LLAPI void call(EventType& event);

    /**
     * @brief Unsubscribe the event.
     */
    LLAPI void unsubscribe();

    LLAPI bool operator==(Listener const& other) const;

    LLAPI bool operator<(Listener const& other) const;
};


} // namespace ll::event
