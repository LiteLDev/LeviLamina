#include "ll/api/service/Bedrock.h"

#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/Packet.h"
#include "mc/network/PacketSender.h"
#include "mc/world/Minecraft.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/Dimension.h"

void Packet::sendTo(Player const& player) const {
    sendToClient(player.getNetworkIdentifier(), player.getClientSubId());
}

void Packet::sendTo(BlockPos const& pos, DimensionType dimId, optional_ref<Player const> except) const {
    ll::service::getLevel().and_then([&](auto& level) {
        if (auto ptr = level.getDimension(dimId).lock(); ptr) {
            ptr->sendPacketForPosition(pos, *this, except.as_ptr());
        }
    });
}

void Packet::sendTo(Actor const& actor, optional_ref<Player const> except) const {
    actor.getDimension().sendPacketForEntity(actor, *this, except.as_ptr());
}

void Packet::sendToClient(NetworkIdentifier const& id, SubClientId clientId) const {
    ll::service::getMinecraft(false).and_then([&](auto& minecraft) {
        minecraft.mPacketSender.sendToClient(id, *this, clientId);
    });
}

void Packet::sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const {
    sendToClient(identifierWithSubId.id, identifierWithSubId.subClientId);
}

void Packet::sendToClients() const {
    ll::service::getMinecraft(false).and_then([&](auto& minecraft) { //
        minecraft.mPacketSender.sendBroadcast(*this);
    });
}
void Packet::sendToClients(NetworkIdentifier const& exceptId, ::SubClientId exceptSubid) const {
    ll::service::getMinecraft(false).and_then([&](auto& minecraft) {
        minecraft.mPacketSender.sendBroadcast(exceptId, exceptSubid, *this);
    });
}

void Packet::sendToServer() const {
    ll::service::getMinecraft(true).and_then([&](auto& minecraft) {
        minecraft.mPacketSender.sendToServer(const_cast<Packet&>(*this));
    });
}
