#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/GameType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/GameType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetDefaultGameTypePacket : public ::Packet {
public:
    GameType mDefaultGameType; // this+0x30

    // prevent constructor by default
    SetDefaultGameTypePacket& operator=(SetDefaultGameTypePacket const&);
    SetDefaultGameTypePacket(SetDefaultGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetDefaultGameTypePacket@@UEAA@XZ
    virtual ~SetDefaultGameTypePacket() = default;

    // vIndex: 1, symbol: ?getId@SetDefaultGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetDefaultGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetDefaultGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetDefaultGameTypePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetDefaultGameTypePacket@@QEAA@XZ
    MCAPI SetDefaultGameTypePacket();

    // symbol: ??0SetDefaultGameTypePacket@@QEAA@W4GameType@@@Z
    MCAPI explicit SetDefaultGameTypePacket(::GameType defaultGameType);

    // NOLINTEND
};
