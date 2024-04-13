#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerFogPacket : public ::Packet {
public:
    std::vector<std::string> mFogStack; // this+0x30

    // prevent constructor by default
    PlayerFogPacket& operator=(PlayerFogPacket const&);
    PlayerFogPacket(PlayerFogPacket const&);
    PlayerFogPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerFogPacket@@UEAA@XZ
    virtual ~PlayerFogPacket();

    // vIndex: 1, symbol: ?getId@PlayerFogPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerFogPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerFogPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerFogPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol:
    // ??0PlayerFogPacket@@QEAA@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI explicit PlayerFogPacket(std::vector<std::string> fogStack);

    // NOLINTEND
};
