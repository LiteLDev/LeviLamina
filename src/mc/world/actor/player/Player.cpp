#include "mc/world/actor/player/Player.h"

#include "mc/certificates/ExtendedCertificate.h"
#include "mc/certificates/WebToken.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/locale/I18n.h"
#include "mc/locale/Localization.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/Packet.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/Minecraft.h"
#include "mc/world/systems/NetworkSystem.h"

#include "ll/api/service/GlobalService.h"
#include "mc/network/packet/TextPacket.h"
#include <memory>

using ll::Global;

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() const {
    return *(const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>());
}

std::string Player::getDeviceId() const {
    if (!Global<ServerNetworkHandler>) {
        return "";
    }
    return Global<ServerNetworkHandler>->fetchConnectionRequest(getNetworkIdentifier()).getDeviceId();
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    if (!Global<NetworkSystem>) {
        return std::nullopt;
    }
    auto peer = Global<NetworkSystem>->getPeerForUser(getNetworkIdentifier());
    if (!peer) {
        return std::nullopt;
    }
    return peer->getNetworkStatus();
}

std::string Player::getRealName() const {
    auto certificate = getCertificate();
    if (!certificate) {
        return getName();
    }
    return ExtendedCertificate::getIdentityName(*certificate);
}

void Player::disconnect(std::string_view reason) const {
    if (!Global<ServerNetworkHandler>) {
        return;
    }
    Global<ServerNetworkHandler>->disconnectClient(
        getNetworkIdentifier(),
        Connection::DisconnectFailReason::Unknown,
        std::string{reason},
        false
    );
}

void Player::sendMessage(std::string_view msg) const { TextPacket::createRawMessage(msg).sendTo(*this); }
