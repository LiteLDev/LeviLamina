#pragma once

#include <Actor/SynchedActorData.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "../Actor/ActorRuntimeID.h"
#include "../Actor/ActorUniqueID.h"
#include "../Core/DataItem.h"
#include "../Core/Packet.h"
#include "../Item/NetworkItemStackDescriptor.h"
#include "../Math/Vec3.h"
#include "../dll.h"

class AddItemActorPacket : public Packet {
public:
    std::vector<std::unique_ptr<DataItem>> items;
    SynchedActorData*                      data = nullptr;
    ActorUniqueID                          uid;
    ActorRuntimeID                         rid;
    NetworkItemStackDescriptor             stack;
    Vec3                                   pos, speed;
    bool                                   from_fishing = false;

    inline ~AddItemActorPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(AddItemActorPacket, items) == 48);
static_assert(offsetof(AddItemActorPacket, uid) == 80);
static_assert(offsetof(AddItemActorPacket, rid) == 88);
static_assert(offsetof(AddItemActorPacket, stack) == 96);
static_assert(offsetof(AddItemActorPacket, pos) == 224);
static_assert(offsetof(AddItemActorPacket, from_fishing) == 248);