#include "ll/api/event/client/ClientEvent.h"

namespace ll::event::inline client {

class ClientStartJoinLevelEvent final : public ll::event::client::ClientEvent {
    bool                                 mJoiningLocalServer;
    std::string const&                   mMultiplayerCorrelationId;
    std::string const&                   mServerName;
    std::string const&                   mWorldName;
    NetworkType                          mNetworkTypeOverride;
    Social::MultiplayerServiceIdentifier mService;
    bool                                 mIsServerTransfer;

public:
    constexpr ClientStartJoinLevelEvent(
        ClientInstance&                      client,
        bool                                 isJoiningLocalServer,
        std::string const&                   multiplayerCorrelationId,
        std::string const&                   serverName,
        std::string const&                   worldName,
        NetworkType                          networkTypeOverride,
        Social::MultiplayerServiceIdentifier service,
        bool                                 isServerTransfer
    )
    : ClientEvent(client),
      mJoiningLocalServer(isJoiningLocalServer),
      mMultiplayerCorrelationId(multiplayerCorrelationId),
      mServerName(serverName),
      mWorldName(worldName),
      mNetworkTypeOverride(networkTypeOverride),
      mService(service),
      mIsServerTransfer(isServerTransfer) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI bool isJoiningLocalServer() const;
    LLNDAPI std::string const& multiplayerCorrelationId() const;
    LLNDAPI std::string const& serverName() const;
    LLNDAPI std::string const& worldName() const;
    LLNDAPI NetworkType        networkTypeOverride() const;
    LLNDAPI Social::MultiplayerServiceIdentifier service() const;
    LLNDAPI bool                                 isServerTransfer() const;
};

} // namespace ll::event::inline client
