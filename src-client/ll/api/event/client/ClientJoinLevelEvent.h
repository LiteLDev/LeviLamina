#include "ll/api/event/client/ClientEvent.h"

#include "mc/world/actor/player/Player.h"

namespace ll::event::inline client {

class ClientJoinLevelEvent final : public ll::event::client::ClientEvent {
    Player& mPlayer;

public:
    constexpr explicit ClientJoinLevelEvent(ClientInstance& client, Player& player)
    : ClientEvent(client),
      mPlayer(player) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Player& player() const;
};

} // namespace ll::event::inline client
