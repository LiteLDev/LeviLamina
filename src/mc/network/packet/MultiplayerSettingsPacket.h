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
    MultiplayerSettingsPacket& operator=(MultiplayerSettingsPacket const&);
    MultiplayerSettingsPacket(MultiplayerSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MultiplayerSettingsPacket@@UEAA@XZ
    virtual ~MultiplayerSettingsPacket();

    // vIndex: 1, symbol: ?getId@MultiplayerSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MultiplayerSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MultiplayerSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@MultiplayerSettingsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MultiplayerSettingsPacket@@QEAA@XZ
    MCAPI MultiplayerSettingsPacket();

    // symbol: ??0MultiplayerSettingsPacket@@QEAA@W4MultiplayerSettingsPacketType@@@Z
    MCAPI explicit MultiplayerSettingsPacket(::MultiplayerSettingsPacketType packetType);

    // NOLINTEND
};
