#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/WebSocketPacketData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AutomationClientConnectPacket : public ::Packet {
public:
    WebSocketPacketData mWebSocketData; // this+0x30

    // prevent constructor by default
    AutomationClientConnectPacket& operator=(AutomationClientConnectPacket const&);
    AutomationClientConnectPacket(AutomationClientConnectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AutomationClientConnectPacket@@UEAA@XZ
    virtual ~AutomationClientConnectPacket();

    // vIndex: 1, symbol: ?getId@AutomationClientConnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AutomationClientConnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AutomationClientConnectPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@AutomationClientConnectPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AutomationClientConnectPacket@@QEAA@XZ
    MCAPI AutomationClientConnectPacket();

    // symbol: ??0AutomationClientConnectPacket@@QEAA@UWebSocketPacketData@@@Z
    MCAPI explicit AutomationClientConnectPacket(struct WebSocketPacketData wsPacketData);

    // NOLINTEND
};
