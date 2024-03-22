#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetTimePacket : public ::Packet {
public:
    int mTime; // this+0x30

    // prevent constructor by default
    SetTimePacket& operator=(SetTimePacket const&);
    SetTimePacket(SetTimePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetTimePacket@@UEAA@XZ
    virtual ~SetTimePacket();

    // vIndex: 1, symbol: ?getId@SetTimePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@SetTimePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetTimePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol: ?_read@SetTimePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetTimePacket@@QEAA@XZ
    MCAPI SetTimePacket();

    // symbol: ??0SetTimePacket@@QEAA@H@Z
    MCAPI explicit SetTimePacket(int time);

    // NOLINTEND
};
