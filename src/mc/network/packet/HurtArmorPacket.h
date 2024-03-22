#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorDamageCause.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class HurtArmorPacket : public ::Packet {
public:
    ActorDamageCause mCause;      // this+0x30
    int              mDmg;        // this+0x34
    std::bitset<4>   mArmorSlots; // this+0x38

    // prevent constructor by default
    HurtArmorPacket& operator=(HurtArmorPacket const&);
    HurtArmorPacket(HurtArmorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HurtArmorPacket@@UEAA@XZ
    virtual ~HurtArmorPacket();

    // vIndex: 1, symbol: ?getId@HurtArmorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@HurtArmorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@HurtArmorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@HurtArmorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0HurtArmorPacket@@QEAA@XZ
    MCAPI HurtArmorPacket();

    // symbol: ??0HurtArmorPacket@@QEAA@W4ActorDamageCause@@HV?$bitset@$03@std@@@Z
    MCAPI HurtArmorPacket(::ActorDamageCause cause, int dmg, std::bitset<4> armorSlots);

    // NOLINTEND
};
