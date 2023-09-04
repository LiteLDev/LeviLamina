#pragma once

#include "liteloader/api/event/Event.h"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::server {
/**
 * @brief Player connect event(aka PlayerPreJoinEvent).
 * @details This event is called when a player connects to the server.
 */
class ServerStoppedEvent : public Event<ServerStoppedEvent> {
public:
    explicit ServerStoppedEvent();

    LL_DELETE_COPY(ServerStoppedEvent);
    LL_DELETE_MOVE(ServerStoppedEvent);
};

} // namespace ll::event::server
