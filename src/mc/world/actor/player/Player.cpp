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
#include <memory>

using ll::Global;

UserEntityIdentifierComponent& Player::getUserEntityIdentifier() const {
    return *(const_cast<Player*>(this)->tryGetComponent<UserEntityIdentifierComponent>());
}

std::string Player::getDeviceId() const {
    return Global<ServerNetworkHandler>->fetchConnectionRequest(getNetworkIdentifier()).getDeviceId();
}

std::optional<NetworkPeer::NetworkStatus> Player::getNetworkStatus() const {
    auto peer = Global<Minecraft>->getNetworkSystem().getPeerForUser(getNetworkIdentifier());
    if (!peer) { return std::nullopt; }
    return peer->getNetworkStatus();
}

std::string Player::getRealName() const {
    auto certificate = getCertificate();
    if (!certificate) { return getName(); }
    return ExtendedCertificate::getIdentityName(*certificate);
}

void Player::disconnect(std::string& reason) const {
    Global<ServerNetworkHandler>->disconnectClient(getNetworkIdentifier(), Connection::DisconnectFailReason::Unknown, reason, false);
}

void Player::sendTextPacket(std::string& text, TextPacketType type) const {
    BinaryStream wp;
    wp.mOwnedBuffer.reserve(40 + text.size());
    wp.writeUnsignedChar((char)type);
    wp.writeBool(true);
    switch (type) {
        case TextPacketType::Chat:
        case TextPacketType::Whisper:
        case TextPacketType::Announcement:
            wp.writeString("Server");
        case TextPacketType::Raw:
        case TextPacketType::Tip:
        case TextPacketType::SystemMessage:
        case TextPacketType::TextObjectWhisper:
        case TextPacketType::TextObject:
        case TextPacketType::TextObjectAnnouncement:

            wp.writeString(text);
            break;
        case TextPacketType::Translate:
        case TextPacketType::Popup:
        case TextPacketType::JukeboxPopup:
            wp.writeString(text);
            wp.writeUnsignedVarInt(0);
            break;
    }
    wp.writeString("");
    wp.writeString("");

    std::shared_ptr<Packet> pkt = MinecraftPackets::createPacket(MinecraftPacketIds::Text);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
}