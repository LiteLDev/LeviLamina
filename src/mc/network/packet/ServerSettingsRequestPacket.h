#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ServerSettingsRequestPacket : public ::Packet {
public:
    // prevent constructor by default
    ServerSettingsRequestPacket& operator=(ServerSettingsRequestPacket const&);
    ServerSettingsRequestPacket(ServerSettingsRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerSettingsRequestPacket@@UEAA@XZ
    virtual ~ServerSettingsRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@ServerSettingsRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ServerSettingsRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ServerSettingsRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ServerSettingsRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ServerSettingsRequestPacket@@QEAA@XZ
    MCAPI ServerSettingsRequestPacket();

    // NOLINTEND
};
