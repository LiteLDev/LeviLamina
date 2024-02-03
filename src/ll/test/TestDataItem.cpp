#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/packet/SetActorDataPacket.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/item/ItemActor.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/Level.h"
#include <memory>
#include <string>

std::shared_ptr<SetActorDataPacket> buildSetActorDataPacketPacket(ItemActor* iac) {
    bool                                   viewable = true;
    std::vector<std::unique_ptr<DataItem>> DataItems;
    DataItems.emplace_back(DataItem::create<const std::string&>(ActorDataIDs::Name, iac->item().getTypeName()));
    DataItems.emplace_back(DataItem::create<signed char>(ActorDataIDs::NametagAlwaysShow, (signed char)viewable));
    BinaryStream bs;
    bs.writeUnsignedVarInt64(iac->getRuntimeID());
    bs.writeType(DataItems);
    bs.writeUnsignedVarInt(0);
    bs.writeUnsignedVarInt(0);
    bs.writeUnsignedVarInt64(0);
    auto packet = MinecraftPackets::createPacket(MinecraftPacketIds::SetActorData);
    packet->read(bs);
    return std::static_pointer_cast<SetActorDataPacket>(packet);
}

LL_AUTO_TYPE_INSTANCE_HOOK(ACTickHook, HookPriority::Normal, ItemActor, &ItemActor::postNormalTick, void) {
    origin();
    ll::service::getLevel()->forEachPlayer([&](Player& player) {
        player.sendNetworkPacket(*buildSetActorDataPacketPacket(this));
        return true;
    });
}
