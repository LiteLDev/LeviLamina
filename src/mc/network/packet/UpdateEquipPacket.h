#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

class UpdateEquipPacket : public ::Packet {
public:
    ContainerID   mContainerId;    // this+0x30
    ContainerType mType;           // this+0x31
    int           mSize;           // this+0x34
    ActorUniqueID mEntityUniqueID; // this+0x38
    CompoundTag   mData;           // this+0x40

    // prevent constructor by default
    UpdateEquipPacket& operator=(UpdateEquipPacket const&);
    UpdateEquipPacket(UpdateEquipPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateEquipPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& bitStream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateEquipPacket();

    MCAPI UpdateEquipPacket(
        ::ContainerID               containerID,
        ::ContainerType             type,
        int                         size,
        class CompoundTag&&         tag,
        struct ActorUniqueID const& entityID
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        ::ContainerID               containerID,
        ::ContainerType             type,
        int                         size,
        class CompoundTag&&         tag,
        struct ActorUniqueID const& entityID
    );

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& bitStream) const;

    // NOLINTEND
};
