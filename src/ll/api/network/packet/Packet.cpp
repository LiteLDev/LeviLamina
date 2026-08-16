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

PacketRuntimeId Packet::getRuntimeId() const { return ll::hash_utils::doHash(getName()); }

void Packet::sendTo(Player const& player) const { RuntimePacket{*this}.sendTo(player); }

void Packet::sendTo(BlockPos const& pos, DimensionType dimId, optional_ref<Player const> except) const {
    RuntimePacket{*this}.sendTo(pos, dimId, except);
}

void Packet::sendTo(Actor const& actor, optional_ref<Player const> except) const {
    RuntimePacket{*this}.sendTo(actor, except);
}

void Packet::sendToClient(NetworkIdentifier const& identifier, SubClientId clientId) const {
    RuntimePacket{*this}.sendToClient(identifier, clientId);
}

void Packet::sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const {
    RuntimePacket{*this}.sendToClient(identifierWithSubId);
}

void Packet::sendToClients() const { RuntimePacket{*this}.sendToClients(); }

void Packet::sendToClients(NetworkIdentifier const& exceptId, SubClientId exceptSubid) const {
    RuntimePacket{*this}.sendToClients(exceptId, exceptSubid);
}

void Packet::sendToServer() const { RuntimePacket{*this}.sendToServer(); }

} // namespace ll::network
