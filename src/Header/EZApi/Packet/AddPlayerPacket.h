#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "../Actor/ActorLink.h"
#include "../Actor/ActorRuntimeID.h"
#include "../Actor/ActorUniqueID.h"
#include "../Actor/SynchedActorData.h"
#include "../Core/DataItem.h"
#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../Item/ItemStack.h"
#include "../Item/NetworkItemStackDescriptor.h"
#include "../Level/Abilities.h"
#include "../Math/Vec2.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class AddPlayerPacket : public Packet {
public:
    std::vector<ActorLink>                 links;
    std::string                            username;
    mce::UUID                              uuid;
    ActorUniqueID                          uid;
    ActorRuntimeID                         rid;                // 128
    std::string                            platform_online_id; // 136
    Vec3                                   pos, speed;         // 168, 180
    Vec2                                   rot;
    float                                  head_yaw = 0.0f; // 200
    std::vector<std::unique_ptr<DataItem>> data_items;      // 208
    Abilities                              abilities;       // 232
    std::string                            device_id;       // 568
    int                                    build_platform = 0;
    NetworkItemStackDescriptor             selected_item; // 608
    SynchedActorData*                      syncedata = nullptr;

    inline AddPlayerPacket() {
    }
    inline ~AddPlayerPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(AddPlayerPacket, rid) == 128);
static_assert(offsetof(AddPlayerPacket, platform_online_id) == 136);
static_assert(offsetof(AddPlayerPacket, pos) == 168);
static_assert(offsetof(AddPlayerPacket, speed) == 180);
static_assert(offsetof(AddPlayerPacket, head_yaw) == 200);
static_assert(offsetof(AddPlayerPacket, data_items) == 208);
static_assert(offsetof(AddPlayerPacket, abilities) == 232);
static_assert(offsetof(AddPlayerPacket, device_id) == 568);
static_assert(offsetof(AddPlayerPacket, selected_item) == 608);