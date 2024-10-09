#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SyncActorPropertyPacket : public ::Packet {
public:
    CompoundTag mPropertyData; // this+0x30

    // prevent constructor by default
    SyncActorPropertyPacket& operator=(SyncActorPropertyPacket const&);
    SyncActorPropertyPacket(SyncActorPropertyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SyncActorPropertyPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SyncActorPropertyPacket();

    MCAPI SyncActorPropertyPacket(
        class HashedString const&         actorCanonicalName,
        class PropertyGroupManager const& propertyGroupManager
    );

    // NOLINTEND
};
