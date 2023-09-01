#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"

class MobEquipmentPacket : public ::Packet {
public:
    // prevent constructor by default
    MobEquipmentPacket& operator=(MobEquipmentPacket const&) = delete;
    MobEquipmentPacket(MobEquipmentPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MobEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MobEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MobEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MobEquipmentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1MobEquipmentPacket@@UEAA@XZ
    MCVAPI ~MobEquipmentPacket();

    // symbol: ??0MobEquipmentPacket@@QEAA@VActorRuntimeID@@AEBVItemStack@@HHW4ContainerID@@@Z
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const&, int, int, ::ContainerID);

    // symbol: ??0MobEquipmentPacket@@QEAA@VActorRuntimeID@@AEBVNetworkItemStackDescriptor@@HHW4ContainerID@@@Z
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class NetworkItemStackDescriptor const&, int, int, ::ContainerID);

    // symbol: ??0MobEquipmentPacket@@QEAA@XZ
    MCAPI MobEquipmentPacket();

    // NOLINTEND
};
