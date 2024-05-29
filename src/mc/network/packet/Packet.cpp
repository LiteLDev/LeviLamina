#include "ll/api/service/Bedrock.h"

#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/Packet.h"
#include "mc/server/LoopbackPacketSender.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/dimension/Dimension.h"

void Packet::sendTo(Player const& player) const {
    sendToClient(player.getNetworkIdentifier(), player.getClientSubId());
}

void Packet::sendTo(BlockPos const& pos, DimensionType type, optional_ref<Player const> except) const {
    if (auto level = ll::service::getLevel(); level) {
        if (auto ptr = level->getDimension(type); ptr) {
            ptr->sendPacketForPosition(pos, *this, except.as_ptr());
        }
    }
}

void Packet::sendTo(Actor const& actor, optional_ref<Player const> except) const {
    actor.getDimension().sendPacketForEntity(actor, *this, except.as_ptr());
}

void Packet::sendToClient(NetworkIdentifier const& id, SubClientId clientId) const {
    if (auto level = ll::service::getLevel(); level) {
        level->getPacketSender()->sendToClient(id, *this, clientId);
    }
}

void Packet::sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const {
    sendToClient(identifierWithSubId.mIdentifier, identifierWithSubId.mSubClientId);
}

void Packet::sendToClients() const {
    if (auto level = ll::service::getLevel(); level) {
        level->getPacketSender()->sendBroadcast(*this);
    }
}
void Packet::sendToClients(NetworkIdentifier const& exceptId, ::SubClientId exceptSubid) const {
    if (auto level = ll::service::getLevel(); level) {
        level->getPacketSender()->sendBroadcast(exceptId, exceptSubid, *this);
    }
}
