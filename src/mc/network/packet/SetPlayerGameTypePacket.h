#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/GameType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetPlayerGameTypePacket : public ::Packet {
public:
    GameType mPlayerGameType; // this+0x30

    // prevent constructor by default
    SetPlayerGameTypePacket& operator=(SetPlayerGameTypePacket const&);
    SetPlayerGameTypePacket(SetPlayerGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetPlayerGameTypePacket@@UEAA@XZ
    virtual ~SetPlayerGameTypePacket() = default;

    // vIndex: 1, symbol: ?getId@SetPlayerGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetPlayerGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetPlayerGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetPlayerGameTypePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetPlayerGameTypePacket@@QEAA@XZ
    MCAPI SetPlayerGameTypePacket();

    // NOLINTEND
};
