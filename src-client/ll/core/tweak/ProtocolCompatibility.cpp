#include "ll/core/network/ProtocolCompatibility.h"

#include "ll/api/memory/Hook.h"
#include "ll/core/Config.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/Packet.h"

namespace ll::protocol_compatibility {

LL_AUTO_TYPE_INSTANCE_HOOK(
    SendCompatibleHandshake,
    HookPriority::Normal,
    NetworkSystem,
    &NetworkSystem::_sendInternal,
    void,
    NetworkIdentifier const& id,
    Packet const&            packet,
    std::string const&       data
) {
    auto kind = packet.getId();
    if (getLeviConfig().modules.protocolCompatibility && !isServer() && id.mType == NetworkIdentifier::Type::RakNet
        && (kind == MinecraftPacketIds::Login || kind == MinecraftPacketIds::RequestNetworkSettings)) {
        auto translated = data;
        if (rewriteHandshake(translated, 2169)) return origin(id, packet, translated);
    }
    origin(id, packet, data);
}

} // namespace ll::protocol_compatibility
