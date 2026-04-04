#include "ll/api/event/client/ClientStartJoinLevelEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/events/PlayerJoinWorldContext.h"
#include "mc/deps/nbt/CompoundTag.h"


namespace ll::event::inline client {

void ClientStartJoinLevelEvent::serialize(CompoundTag& nbt) const {
    ClientEvent::serialize(nbt);
    nbt["isJoiningLocalServer"]     = isJoiningLocalServer();
    nbt["multiplayerCorrelationId"] = multiplayerCorrelationId();
    nbt["serverName"]               = serverName();
    nbt["worldName"]                = worldName();
    nbt["networkTypeOverride"]      = magic_enum::enum_name(networkTypeOverride());
    nbt["service"]                  = magic_enum::enum_name(service());
    nbt["partyId"]                  = partyId();
    nbt["isPartyLeader"]            = isPartyLeader();
    nbt["isPartyDestination"]       = isPartyDestination();
    nbt["isServerTransfer"]         = isServerTransfer();
    nbt["isReconnect"]              = isReconnect();
}

bool               ClientStartJoinLevelEvent::isJoiningLocalServer() const { return mJoiningLocalServer; }
std::string const& ClientStartJoinLevelEvent::multiplayerCorrelationId() const { return mMultiplayerCorrelationId; }
std::string const& ClientStartJoinLevelEvent::serverName() const { return mServerName; }
std::string const& ClientStartJoinLevelEvent::worldName() const { return mWorldName; }
NetworkType        ClientStartJoinLevelEvent::networkTypeOverride() const { return mNetworkTypeOverride; }
Social::MultiplayerServiceIdentifier ClientStartJoinLevelEvent::service() const { return mService; }
PlayerJoinWorldContext const& ClientStartJoinLevelEvent::context() const { return mContext; }
std::string const&            ClientStartJoinLevelEvent::partyId() const { return mContext.partyId; }
bool                          ClientStartJoinLevelEvent::isPartyLeader() const { return mContext.isPartyLeader; }
bool ClientStartJoinLevelEvent::isPartyDestination() const { return mContext.isPartyDestination; }
bool ClientStartJoinLevelEvent::isServerTransfer() const { return mContext.isServerTransfer; }
bool ClientStartJoinLevelEvent::isReconnect() const { return mContext.isReconnect; }

LL_TYPE_INSTANCE_HOOK(
    ClientStartJoinGameHook,
    HookPriority::Normal,
    ClientInstance,
    &ClientInstance::$onStartJoinGame,
    void,
    bool                                 isJoiningLocalServer,
    std::string const&                   multiplayerCorrelationId,
    std::string const&                   serverName,
    std::string const&                   worldName,
    NetworkType                          networkTypeOverride,
    Social::MultiplayerServiceIdentifier service,
    PlayerJoinWorldContext               context
) {
    EventBus::getInstance().publish(ClientStartJoinLevelEvent(
        *this,
        isJoiningLocalServer,
        multiplayerCorrelationId,
        serverName,
        worldName,
        networkTypeOverride,
        service,
        context
    ));
    origin(
        isJoiningLocalServer,
        multiplayerCorrelationId,
        serverName,
        worldName,
        networkTypeOverride,
        service,
        context
    );
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ClientStartJoinLevelEventEmitter : public Emitter<emitterFactory, ClientStartJoinLevelEvent> {
    memory::HookRegistrar<ClientStartJoinGameHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ClientStartJoinLevelEventEmitter>(); }

} // namespace ll::event::inline client
