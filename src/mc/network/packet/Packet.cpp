#include "liteloader/api/service/GlobalService.h"

#include "mc/network/packet/Packet.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/LoopbackPacketSender.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/Dimension.h"


void Packet::sendTo(Player& player){
    player.sendNetworkPacket(*this);
}

void Packet::sendTo(BlockPos const& pos,DimensionType type,optional_ref<Player> except) const{
    ll::Global<Minecraft>->getLevel()->getDimension(type)->sendPacketForPosition(pos,*this,except.has_value() ? except.as_ptr() : nullptr);
}

void Packet::sendTo(Actor& actor,optional_ref<Player> except) const{
    actor.getDimension().sendPacketForEntity(actor,*this, except.has_value() ? except.as_ptr() : nullptr);
}

void Packet::sendToClient(NetworkIdentifier const& id,SubClientId clientId) const{
    ll::Global<Minecraft>->getLevel()->getPacketSender()->sendToClient(id,*this, clientId);
}

void Packet::sendToClients(){
    ll::Global<Minecraft>->getLevel()->forEachPlayer([this](Player const& player) -> bool{
        player.sendNetworkPacket(*this);
        return true;
    });
}