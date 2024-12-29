#include "ll/api/service/Bedrock.h"

#include "mc/network/LoopbackPacketSender.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/Packet.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/dimension/Dimension.h"

void Packet::sendTo(ServerPlayer const& player) const {
    sendToClient(player.getNetworkIdentifier(), player.getClientSubId());
}

void Packet::sendTo(BlockPos const& pos, DimensionType type, optional_ref<Player const> except) const {
    ll::service::getLevel().transform([&](auto& level) {
        if (auto ptr = level.getDimension(type); ptr) {
            ptr->sendPacketForPosition(pos, *this, except.as_ptr());
        }
        return true;
    });
}

void Packet::sendTo(Actor const& actor, optional_ref<Player const> except) const {
    actor.getDimension().sendPacketForEntity(actor, *this, except.as_ptr());
}

void Packet::sendToClient(NetworkIdentifier const& id, SubClientId clientId) const {
    ll::service::getLevel().transform([&](auto& level) {
        level.getPacketSender()->sendToClient(id, *this, clientId);
        return true;
    });
}

void Packet::sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const {
    sendToClient(*identifierWithSubId.id, identifierWithSubId.subClientId);
}

void Packet::sendToClients() const {
    ll::service::getLevel().transform([&](auto& level) {
        level.getPacketSender()->sendBroadcast(*this);
        return true;
    });
}
void Packet::sendToClients(NetworkIdentifier const& exceptId, ::SubClientId exceptSubid) const {
    ll::service::getLevel().transform([&](auto& level) {
        level.getPacketSender()->sendBroadcast(exceptId, exceptSubid, *this);
        return true;
    });
}
