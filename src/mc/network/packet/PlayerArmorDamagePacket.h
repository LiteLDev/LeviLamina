#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerArmorDamagePacket : public ::Packet {
public:
    std::bitset<4>       mSlots;   // this+0x30
    std::array<short, 4> mDamages; // this+0x34

    // prevent constructor by default
    PlayerArmorDamagePacket& operator=(PlayerArmorDamagePacket const&);
    PlayerArmorDamagePacket(PlayerArmorDamagePacket const&);
    PlayerArmorDamagePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerArmorDamagePacket@@UEAA@XZ
    virtual ~PlayerArmorDamagePacket();

    // vIndex: 1, symbol: ?getId@PlayerArmorDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerArmorDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerArmorDamagePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerArmorDamagePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
