#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetHealthPacket : public ::Packet {
public:
    int mHealth; // this+0x30

    // prevent constructor by default
    SetHealthPacket& operator=(SetHealthPacket const&);
    SetHealthPacket(SetHealthPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetHealthPacket@@UEAA@XZ
    virtual ~SetHealthPacket();

    // vIndex: 1, symbol: ?getId@SetHealthPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetHealthPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetHealthPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetHealthPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetHealthPacket@@QEAA@XZ
    MCAPI SetHealthPacket();

    // symbol: ??0SetHealthPacket@@QEAA@H@Z
    MCAPI explicit SetHealthPacket(int health);

    // NOLINTEND
};
