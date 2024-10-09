#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/WebSocketPacketData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AutomationClientConnectPacket : public ::Packet {
public:
    WebSocketPacketData mWebSocketData; // this+0x30

    // prevent constructor by default
    AutomationClientConnectPacket& operator=(AutomationClientConnectPacket const&);
    AutomationClientConnectPacket(AutomationClientConnectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AutomationClientConnectPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AutomationClientConnectPacket();

    MCAPI explicit AutomationClientConnectPacket(struct WebSocketPacketData wsPacketData);

    // NOLINTEND
};
