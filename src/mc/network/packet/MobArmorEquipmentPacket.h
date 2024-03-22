#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

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
    // vIndex: 0, symbol: ??1MobArmorEquipmentPacket@@UEAA@XZ
    virtual ~MobArmorEquipmentPacket();

    // vIndex: 1, symbol: ?getId@MobArmorEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MobArmorEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MobArmorEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@MobArmorEquipmentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MobArmorEquipmentPacket@@QEAA@XZ
    MCAPI MobArmorEquipmentPacket();

    // symbol: ??0MobArmorEquipmentPacket@@QEAA@AEBVActor@@@Z
    MCAPI explicit MobArmorEquipmentPacket(class Actor const& e);

    // NOLINTEND
};
