#pragma once

#include <functional>
#include <list>
#include <set>
#include <string>

#include <magic_enum.hpp>

#include "liteloader/api/LLAPI.h"
#include "liteloader/api/event/Cancellable.h"
#include "liteloader/api/event/Listener.h"
#include "liteloader/api/utils/WinHelper.h"

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
    LLAPI static std::weak_ptr<ListenerType> subscribe(
        const std::function<void(EventType&)>& callback,
        EventPriority                          priority = EventPriority::Normal,
        HMODULE                                plugin   = GetCurrentModule()
    );

    /**
     * @brief Subscribe the event.
     * @param listener The listener instance to subscribe.
     */
    LLAPI static void subscribe(std::shared_ptr<ListenerType> listener);

    /**
     * @brief Unsubscribe the event.
     * @param listener The listener instance to unsubscribe.
     */
    LLAPI static void unsubscribe(std::weak_ptr<ListenerType> listener);

    /**
     * @brief Unsubscribe the event by id.
     * @param id The listener id.
     */
    LLAPI static void unsubscribe(int listenerId) noexcept;
};

} // namespace ll::event
