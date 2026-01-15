#include "ll/api/event/client/ClientEvent.h"

namespace ll::event::inline client {

class ClientExitLevelEvent final : public ClientEvent {
public:
    constexpr explicit ClientExitLevelEvent(ClientInstance& client) : ClientEvent(client) {}
};

} // namespace ll::event::inline client
