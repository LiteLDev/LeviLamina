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

LL_AUTO_TYPE_INSTANCE_HOOK(ACTickHook, HookPriority::Normal, ItemActor, &ItemActor::postNormalTick, void) {
    origin();
    SetActorDataPacket packet;
    packet.mId = getRuntimeID();
    packet.mPackedItems.emplace_back(DataItem::create(ActorDataIDs::Name, item().getTypeName()));
    packet.mPackedItems.emplace_back(DataItem::create(ActorDataIDs::NametagAlwaysShow, true));

    packet.sendToClients();
}
