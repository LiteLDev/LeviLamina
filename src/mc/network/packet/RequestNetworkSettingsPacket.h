#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RequestNetworkSettingsPacket : public ::Packet {
public:
    int mClientNetworkVersion; // this+0x30

    // prevent constructor by default
    RequestNetworkSettingsPacket& operator=(RequestNetworkSettingsPacket const&);
    RequestNetworkSettingsPacket(RequestNetworkSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RequestNetworkSettingsPacket@@UEAA@XZ
    virtual ~RequestNetworkSettingsPacket() = default;

    // vIndex: 1, symbol: ?getId@RequestNetworkSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RequestNetworkSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RequestNetworkSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@RequestNetworkSettingsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RequestNetworkSettingsPacket@@QEAA@XZ
    MCAPI RequestNetworkSettingsPacket();

    // NOLINTEND
};
