#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetActorDataPacket : public ::Packet {
public:
    ActorRuntimeID                         mId;
    std::vector<std::unique_ptr<DataItem>> mPackedItems;
    PropertySyncData                       mSynchedProperties;
    uint64                                 mTick;

    // prevent constructor by default
    SetActorDataPacket& operator=(SetActorDataPacket const&);
    SetActorDataPacket(SetActorDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetActorDataPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetActorDataPacket();

    MCAPI SetActorDataPacket(
        class ActorRuntimeID                 id,
        class SynchedActorDataEntityWrapper& entityData,
        class PropertyComponent*,
        uint64 tick,
        bool
    );

    // NOLINTEND
};
