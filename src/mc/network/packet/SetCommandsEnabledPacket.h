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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetCommandsEnabledPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetCommandsEnabledPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetCommandsEnabledPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetCommandsEnabledPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SetCommandsEnabledPacket@@UEAA@XZ
    MCVAPI ~SetCommandsEnabledPacket();

    // symbol: ??0SetCommandsEnabledPacket@@QEAA@_N@Z
    MCAPI explicit SetCommandsEnabledPacket(bool);

    // symbol: ??0SetCommandsEnabledPacket@@QEAA@XZ
    MCAPI SetCommandsEnabledPacket();

    // NOLINTEND
};
