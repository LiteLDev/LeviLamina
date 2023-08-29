#pragma once

#include "liteloader/api/event/Event.h"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::server {
/**
 * @brief Player connect event(aka PlayerPreJoinEvent).
 * @details This event is called when a player connects to the server.
 */
class ServerStartedEvent : public Event<ServerStartedEvent> {
public:
    explicit ServerStartedEvent();

    LL_DELETE_COPY(ServerStartedEvent);
    LL_DELETE_MOVE(ServerStartedEvent);
};

} // namespace ll::event::server
