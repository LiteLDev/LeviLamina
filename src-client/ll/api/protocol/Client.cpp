#include "ll/api/protocol/Client.h"

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/ClientEndpoint.h"

namespace ll::protocol::client {

Expected<Session> currentSession() noexcept {
    auto endpoint = detail::getClientEndpoint();
    return endpoint ? endpoint->currentSession() : makeSessionError(SessionErrc::TransportUnavailable);
}

} // namespace ll::protocol::client
