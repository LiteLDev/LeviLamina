#include "ll/api/event/client/ClientEvent.h"

namespace ll::event::inline client {

class ClientCancelJoinLevelEvent final : public ll::event::client::ClientEvent {
public:
    constexpr explicit ClientCancelJoinLevelEvent(ClientInstance& client) : ClientEvent(client) {}
};

} // namespace ll::event::inline client
