#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MobArmorEquipmentPacket : public ::Packet {
public:
    // prevent constructor by default
    MobArmorEquipmentPacket& operator=(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MobArmorEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MobArmorEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MobArmorEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MobArmorEquipmentPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1MobArmorEquipmentPacket@@UEAA@XZ
    MCVAPI ~MobArmorEquipmentPacket();

    // symbol: ??0MobArmorEquipmentPacket@@QEAA@AEBVActor@@@Z
    MCAPI explicit MobArmorEquipmentPacket(class Actor const&);

    // symbol: ??0MobArmorEquipmentPacket@@QEAA@XZ
    MCAPI MobArmorEquipmentPacket();

    // NOLINTEND
};
