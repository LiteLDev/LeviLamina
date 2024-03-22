#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ServerSettingsResponsePacket : public ::Packet {
public:
    uint        mFormId;   // this+0x30
    std::string mFormJSON; // this+0x38

    // prevent constructor by default
    ServerSettingsResponsePacket& operator=(ServerSettingsResponsePacket const&);
    ServerSettingsResponsePacket(ServerSettingsResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerSettingsResponsePacket@@UEAA@XZ
    virtual ~ServerSettingsResponsePacket() = default;

    // vIndex: 1, symbol: ?getId@ServerSettingsResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ServerSettingsResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ServerSettingsResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ServerSettingsResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ServerSettingsResponsePacket@@QEAA@XZ
    MCAPI ServerSettingsResponsePacket();

    // NOLINTEND
};
