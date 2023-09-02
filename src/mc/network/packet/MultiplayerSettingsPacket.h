#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/MultiplayerSettingsPacketType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/MultiplayerSettingsPacketType.h"
#include "mc/network/packet/Packet.h"

class MultiplayerSettingsPacket : public ::Packet {
public:
    MultiplayerSettingsPacketType mPacketType; // this+0x30

    // prevent constructor by default
    MultiplayerSettingsPacket& operator=(MultiplayerSettingsPacket const&) = delete;
    MultiplayerSettingsPacket(MultiplayerSettingsPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MultiplayerSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MultiplayerSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MultiplayerSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MultiplayerSettingsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1MultiplayerSettingsPacket@@UEAA@XZ
    MCVAPI ~MultiplayerSettingsPacket();

    // symbol: ??0MultiplayerSettingsPacket@@QEAA@W4MultiplayerSettingsPacketType@@@Z
    MCAPI MultiplayerSettingsPacket(::MultiplayerSettingsPacketType);

    // symbol: ??0MultiplayerSettingsPacket@@QEAA@XZ
    MCAPI MultiplayerSettingsPacket();

    // NOLINTEND
};
