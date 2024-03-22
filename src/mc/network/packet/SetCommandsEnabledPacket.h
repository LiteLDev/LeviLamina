#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetCommandsEnabledPacket : public ::Packet {
public:
    bool mCommandsEnabled; // this+0x30

    // prevent constructor by default
    SetCommandsEnabledPacket& operator=(SetCommandsEnabledPacket const&);
    SetCommandsEnabledPacket(SetCommandsEnabledPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetCommandsEnabledPacket@@UEAA@XZ
    virtual ~SetCommandsEnabledPacket();

    // vIndex: 1, symbol: ?getId@SetCommandsEnabledPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetCommandsEnabledPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetCommandsEnabledPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetCommandsEnabledPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetCommandsEnabledPacket@@QEAA@XZ
    MCAPI SetCommandsEnabledPacket();

    // symbol: ??0SetCommandsEnabledPacket@@QEAA@_N@Z
    MCAPI explicit SetCommandsEnabledPacket(bool commandsEnabled);

    // NOLINTEND
};
