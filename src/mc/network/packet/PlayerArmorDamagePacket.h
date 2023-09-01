#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerArmorDamagePacket : public ::Packet {
public:
    // prevent constructor by default
    PlayerArmorDamagePacket& operator=(PlayerArmorDamagePacket const&) = delete;
    PlayerArmorDamagePacket(PlayerArmorDamagePacket const&)            = delete;
    PlayerArmorDamagePacket()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PlayerArmorDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerArmorDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerArmorDamagePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@PlayerArmorDamagePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1PlayerArmorDamagePacket@@UEAA@XZ
    MCVAPI ~PlayerArmorDamagePacket();

    // NOLINTEND
};
