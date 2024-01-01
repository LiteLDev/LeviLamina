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
#include "mc/network/NetworkSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/Packet.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/Minecraft.h"

#include "ll/api/service/Bedrock.h"
#include "mc/network/packet/TextPacket.h"
#include <memory>

UserEntityIdentifierComponent const& Player::getUserEntityIdentifier() const {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() {
    return *(getEntityContext().tryGetComponent<UserEntityIdentifierComponent>());
}

optional_ref<ConnectionRequest const> Player::getConnectionRequest() const {
    if (isSimulatedPlayer()) {
        return std::nullopt;
    }
    return ll::service::getServerNetworkHandler()->fetchConnectionRequest(getNetworkIdentifier());
}

std::string Player::getLocaleName() const {
    if (auto request = getConnectionRequest()) {
        return request->mRawToken->mDataInfo.get("LanguageCode", "").asString("");
    }
    return "";
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    if (!ll::service::getNetworkSystem()) {
        return std::nullopt;
    }
    auto peer = ll::service::getNetworkSystem()->getPeerForUser(getNetworkIdentifier());
    if (!peer) {
        return std::nullopt;
    }
    return peer->getNetworkStatus();
}

std::string Player::getRealName() const {
    std::string res;
    auto        certificate = getCertificate();
    if (certificate) {
        res = ExtendedCertificate::getIdentityName(*certificate);
    }
    if (res.empty()) res = getName();
    return res;
}

void Player::disconnect(std::string_view reason) const {
    if (!ll::service::getServerNetworkHandler()) {
        return;
    }
    ll::service::getServerNetworkHandler()->disconnectClient(
        getNetworkIdentifier(),
        Connection::DisconnectFailReason::Unknown,
        std::string{reason},
        false
    );
}

void Player::sendMessage(std::string_view msg) const { TextPacket::createRawMessage(msg).sendTo(*this); }
