#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class MobArmorEquipmentPacket : public ::Packet {
public:
    NetworkItemStackDescriptor mHead;  // this+0x30
    NetworkItemStackDescriptor mTorso; // this+0x90
    NetworkItemStackDescriptor mLegs;  // this+0xF0
    NetworkItemStackDescriptor mFeet;  // this+0x150

    ActorRuntimeID mRuntimeId; // this+0x1B0

    // prevent constructor by default
    MobArmorEquipmentPacket& operator=(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobArmorEquipmentPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MobArmorEquipmentPacket();

    MCAPI explicit MobArmorEquipmentPacket(class Actor const& e);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Actor const& e);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
