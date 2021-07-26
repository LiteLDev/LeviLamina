#pragma once

#include <cstdint>
#include <memory>
#include <vector>

#include "../Actor/ActorDefinitionIdentifier.h"
#include "../Actor/ActorLink.h"
#include "../Actor/ActorRuntimeID.h"
#include "../Actor/ActorUniqueID.h"
#include "../Actor/AttributeInstanceHandle.h"
#include "../Actor/SyncedAttribute.h"
#include "../Actor/SynchedActorData.h"
#include "../Core/DataItem.h"
#include "../Core/Packet.h"
#include "../Math/Vec2.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class Actor;

class AddActorPacket : public Packet {
public:
    std::vector<ActorLink>                 links;
    Vec3                                   pos, speed;
    Vec2                                   rot;
    float                                  head_yaw = 0.0f;
    ActorUniqueID                          uid;
    ActorRuntimeID                         rid;
    SynchedActorData*                      syncedata;
    std::vector<std::unique_ptr<DataItem>> items;
    ActorDefinitionIdentifier              def_id;
    std::vector<SyncedAttribute>           synced_attribute;

    inline AddActorPacket() {
    }
    MCAPI AddActorPacket(Actor&);
    inline ~AddActorPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(AddActorPacket, links) == 48);
static_assert(offsetof(AddActorPacket, pos) == 72);
static_assert(offsetof(AddActorPacket, rot) == 96);
static_assert(offsetof(AddActorPacket, uid) == 112);
static_assert(offsetof(AddActorPacket, rid) == 120);
static_assert(offsetof(AddActorPacket, syncedata) == 128);
static_assert(offsetof(AddActorPacket, items) == 136);
static_assert(offsetof(AddActorPacket, def_id) == 160);