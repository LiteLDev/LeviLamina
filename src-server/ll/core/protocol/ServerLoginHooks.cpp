#include "ll/core/protocol/ServerLoginIntegration.h"

#include <optional>

#include "ll/api/memory/Hook.h"

#include "mc/network/ConnectionRequest.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ClientToServerHandshakePacket.h"
#include "mc/network/packet/LoginPacket.h"

namespace ll::protocol::detail {

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerDiscoveryHook,
    HookPriority::Highest,
    ServerNetworkHandler,
    &ServerNetworkHandler::$_validateLoginPacket,
    std::optional<PlayerAuthenticationInfo>,
    NetworkIdentifier const& id,
    LoginPacket const&       packet
) {
    auto result = origin(id, packet);
    if (result && packet.mConnectionRequest) {
        getServerLoginIntegration()
            .observeConnectionRequest(id, static_cast<std::uint8_t>(packet.mSenderSubId), *packet.mConnectionRequest);
    }

    return result;
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerLoginHandshakeHook,
    HookPriority::Highest,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const&             id,
    ClientToServerHandshakePacket const& packet
) {
    NetworkIdentifierWithSubId sender{id, packet.mSenderSubId};

    switch (getServerLoginIntegration().handleHandshake(*this, sender)) {
    case ServerLoginIntegration::HandshakeDisposition::ContinueVanilla:
        origin(id, packet);
        return;
    case ServerLoginIntegration::HandshakeDisposition::Deferred:
    case ServerLoginIntegration::HandshakeDisposition::Rejected:
        return;
    }
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ProtocolServerPreloginRuntimePacketGateHook,
    HookPriority::Highest,
    ServerNetworkHandler,
    &ServerNetworkHandler::$allowIncomingPacketId,
    IncomingPacketFilterResult,
    NetworkIdentifierWithSubId const& sender,
    MinecraftPacketIds                packetId,
    uint64                            packetSize
) {
    if (packetId == MinecraftPacketIds::LeviLaminaRuntimePacket) {
        switch (getServerLoginIntegration().filterIncoming(sender, static_cast<std::size_t>(packetSize))) {
        case ServerLoginIntegration::InboundDisposition::Allowed:
            return IncomingPacketFilterResult::Allowed;
        case ServerLoginIntegration::InboundDisposition::Rejected:
            return IncomingPacketFilterResult::RejectedWithDisconnect;
        case ServerLoginIntegration::InboundDisposition::UseNativePolicy:
            break;
        }
    }

    return origin(sender, packetId, packetSize);
}

Expected<>
invokeOriginalClientHandshake(NetEventCallback& callback, NetworkIdentifierWithSubId const& sender) noexcept {
    try {
        ClientToServerHandshakePacket packet;
        packet.mSenderSubId = sender.subClientId;

        reinterpret_cast<ProtocolServerLoginHandshakeHook*>(&callback)->origin(sender.id, packet);
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace ll::protocol::detail
