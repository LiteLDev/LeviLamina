#pragma once

#include <functional>
#include <list>
#include <set>
#include <string>

#include <magic_enum.hpp>

#include "llapi/LLAPI.h"
#include "llapi/event/Cancellable.h"
#include "llapi/event/Listener.h"
#include "llapi/utils/WinHelper.h"

namespace ll::event {

/**
 * @brief Event base class.
 * @tparam EventType Event type.
 */
template <typename EventType>
class Event {
private:
    using ListenerType = Listener<EventType>;

public:
    /**
     * @brief Subscribe the event.
     * @param callback The callback function.
     * @param priority The priority of the listener.
     * @return The listener instance(weak ref).
     * @see Priority
     * @par Example
     * @code
     * AEvent::subscribe([](AEvent& ev) {
     *     // do something
     *     ev.cancel();
     * });
     * @endcode
     */
    LIAPI static std::weak_ptr<ListenerType> subscribe(
        const std::function<void(EventType&)>& callback,
        EventPriority                          priority = EventPriority::Normal,
        HMODULE                                plugin   = GetCurrentModule()
    );

    /**
     * @brief Subscribe the event.
     * @param listener The listener instance to subscribe.
     */
    LIAPI static void subscribe(std::shared_ptr<ListenerType> listener);

    /**
     * @brief Unsubscribe the event.
     * @param listener The listener instance to unsubscribe.
     */
    LIAPI static void unsubscribe(std::weak_ptr<ListenerType> listener);

    /**
     * @brief Unsubscribe the event by id.
     * @param id The listener id.
     */
    LIAPI static void unsubscribe(int listenerId) noexcept;
};

} // namespace ll::event
