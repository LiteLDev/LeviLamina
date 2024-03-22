#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DeathInfoPacket : public ::Packet {
public:
    std::pair<std::string, std::vector<std::string>> mDeathCauseMessage; // this+0x30

    // prevent constructor by default
    DeathInfoPacket& operator=(DeathInfoPacket const&);
    DeathInfoPacket(DeathInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DeathInfoPacket@@UEAA@XZ
    virtual ~DeathInfoPacket();

    // vIndex: 1, symbol: ?getId@DeathInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@DeathInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@DeathInfoPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@DeathInfoPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0DeathInfoPacket@@QEAA@XZ
    MCAPI DeathInfoPacket();

    // symbol:
    // ??0DeathInfoPacket@@QEAA@AEBU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@@Z
    MCAPI explicit DeathInfoPacket(std::pair<std::string, std::vector<std::string>> const&);

    // NOLINTEND
};
