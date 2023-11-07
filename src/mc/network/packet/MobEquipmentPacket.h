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
    // vIndex: 0, symbol: ??1MobEquipmentPacket@@UEAA@XZ
    virtual ~MobEquipmentPacket();

    // vIndex: 1, symbol: ?getId@MobEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MobEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MobEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MobEquipmentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0MobEquipmentPacket@@QEAA@XZ
    MCAPI MobEquipmentPacket();

    // symbol: ??0MobEquipmentPacket@@QEAA@$$QEAV0@@Z
    MCAPI MobEquipmentPacket(class MobEquipmentPacket&&);

    // symbol: ??0MobEquipmentPacket@@QEAA@VActorRuntimeID@@AEBVItemStack@@HHW4ContainerID@@@Z
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const&, int, int, ::ContainerID);

    // symbol: ??0MobEquipmentPacket@@QEAA@VActorRuntimeID@@AEBVNetworkItemStackDescriptor@@HHW4ContainerID@@@Z
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class NetworkItemStackDescriptor const&, int, int, ::ContainerID);

    // NOLINTEND
};
