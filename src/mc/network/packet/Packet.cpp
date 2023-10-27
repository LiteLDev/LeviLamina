#include "ll/api/service/GlobalService.h"

#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/Packet.h"
#include "mc/server/LoopbackPacketSender.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/dimension/Dimension.h"


void Packet::sendTo(Player const& player) { player.sendNetworkPacket(*this); }

void Packet::sendTo(BlockPos const& pos, DimensionType type, optional_ref<Player const> except) const {
    ll::Global<Minecraft>->getLevel()->getDimension(type)->sendPacketForPosition(pos, *this, except.as_ptr());
}

void Packet::sendTo(Actor const& actor, optional_ref<Player const> except) const {
    actor.getDimension().sendPacketForEntity(actor, *this, except.as_ptr());
}

void Packet::sendToClient(NetworkIdentifier const& id, SubClientId clientId) const {
    ll::Global<Minecraft>->getLevel()->getPacketSender()->sendToClient(id, *this, clientId);
}

void Packet::sendToClients() {
    ll::Global<Minecraft>->getLevel()->forEachPlayer([this](Player const& player) -> bool {
        player.sendNetworkPacket(*this);
        return true;
    });
}
