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
#include "mc/world/Minecraft.h"
#include "mc/world/level/Level.h"
#include "mc/world/systems/NetworkSystem.h"

#include "liteloader/api/service/GlobalService.h"

using ll::Global;

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() const {
    return *(const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>());
}

std::string Player::getDeviceId() const {
    return Global<ServerNetworkHandler>->fetchConnectionRequest(getNetworkIdentifier()).getDeviceId();
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    auto peer = Global<Minecraft>->getNetworkSystem().getPeerForUser(getNetworkIdentifier());
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

void Player::sendRawFormPacket(uint formId, const std::string& data) const {
    BinaryStream wp;
    wp.reserve(8 + data.size());
    wp.writeUnsignedVarInt(formId);
    wp.writeString(data);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::ShowModalForm);
    pkt->read(wp);
    this->sendNetworkPacket(*pkt);
}