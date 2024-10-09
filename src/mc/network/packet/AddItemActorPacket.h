#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"
#include "mc/platform/Result.h"

class AddItemActorPacket : public ::AddActorBasePacket {
public:
    std::vector<std::unique_ptr<DataItem>> mData;
    SynchedActorDataEntityWrapper*         mEntityData;
    ActorUniqueID                          mId;
    ActorRuntimeID                         mRuntimeId;
    NetworkItemStackDescriptor             mItem;
    Vec3                                   mPos;
    Vec3                                   mVelocity;
    bool                                   mIsFromFishing;

    // prevent constructor by default
    AddItemActorPacket& operator=(AddItemActorPacket const&);
    AddItemActorPacket(AddItemActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddItemActorPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddItemActorPacket();

    MCAPI explicit AddItemActorPacket(class ItemActor& itemEntity);

    // NOLINTEND
};
