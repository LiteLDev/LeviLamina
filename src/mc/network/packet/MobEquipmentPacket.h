#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class MobEquipmentPacket : public ::Packet {
public:
    ActorRuntimeID             mRuntimeId;    // this+0x30
    NetworkItemStackDescriptor mItem;         // this+0x38
    int                        mSlot;         // this+0x98
    int                        mSelectedSlot; // this+0x9C
    ContainerID                mContainerId;  // this+0xA0

    uchar mSlotByte;         // this+0xA1
    uchar mSelectedSlotByte; // this+0xA2
    uchar mContainerIdByte;  // this+0xA3

    // prevent constructor by default
    MobEquipmentPacket& operator=(MobEquipmentPacket const&);
    MobEquipmentPacket(MobEquipmentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEquipmentPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MobEquipmentPacket();

    MCAPI MobEquipmentPacket(class MobEquipmentPacket&&);

    MCAPI MobEquipmentPacket(
        class ActorRuntimeID   runtimeId,
        class ItemStack const& item,
        int                    slot,
        int                    selectedSlot,
        ::ContainerID          containerId
    );

    MCAPI MobEquipmentPacket(
        class ActorRuntimeID                    runtimeId,
        class NetworkItemStackDescriptor const& item,
        int                                     slot,
        int                                     selectedSlot,
        ::ContainerID                           containerId
    );

    // NOLINTEND
};
