#include "ll/api/network/packet/Packet.h"
#include "mc/network/LoopbackPacketSender.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/Packet.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/Minecraft.h"
#include "mc/world/actor/player/Player.h"

#include "ll/api/service/Bedrock.h"

#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::network {
void Packet::sendToServer() const {
    auto          level = ll::service::getMinecraft(true)->getLevel();
    if(!level) return;
    RuntimePacket packet(ll::hash_utils::doHash(getName()), *this);
    level->getPacketSender()->sendToServer(packet);
}

void Packet::sendToClient(::NetworkIdentifier const& identifier, ::SubClientId clientId) const {
    ll::service::getLevel().transform([&](auto& level) {
        RuntimePacket packet(ll::hash_utils::doHash(getName()), *this);
        level.getPacketSender()->sendToClient(identifier, packet, clientId);
        return true;
    });
}

void Packet::sendToClient(::UserEntityIdentifierComponent const* user) {
    ll::service::getLevel().transform([&](auto& level) {
        RuntimePacket packet(ll::hash_utils::doHash(getName()), *this);
        level.getPacketSender()->sendToClient(user, packet);
        return true;
    });
}


void Packet::sendToClients(::std::vector<::NetworkIdentifierWithSubId> const& users) {
    ll::service::getLevel().transform([&](auto& level) {
        RuntimePacket packet(ll::hash_utils::doHash(getName()), *this);
        level.getPacketSender()->sendToClients(users, packet);
        return true;
    });
}

void Packet::sendBroadcast() {
    ll::service::getLevel().transform([&](auto& level) {
        RuntimePacket packet(ll::hash_utils::doHash(getName()), *this);
        level.getPacketSender()->sendBroadcast(packet);
        return true;
    });
}

void Packet::sendBroadcast(::NetworkIdentifier const& identifier, ::SubClientId clientId) {
    ll::service::getLevel().transform([&](auto& level) {
        RuntimePacket packet(ll::hash_utils::doHash(getName()), *this);
        level.getPacketSender()->sendBroadcast(identifier, clientId, packet);
        return true;
    });
}
} // namespace ll::network