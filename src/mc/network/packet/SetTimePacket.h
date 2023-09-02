#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetTimePacket : public ::Packet {
public:
    int32_t mTime; // this+0x30

    // prevent constructor by default
    SetTimePacket& operator=(SetTimePacket const&) = delete;
    SetTimePacket(SetTimePacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetTimePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@SetTimePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetTimePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol: ?_read@SetTimePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SetTimePacket@@UEAA@XZ
    MCVAPI ~SetTimePacket();

    // symbol: ??0SetTimePacket@@QEAA@XZ
    MCAPI SetTimePacket();

    // symbol: ??0SetTimePacket@@QEAA@H@Z
    MCAPI SetTimePacket(int);

    // NOLINTEND
};
