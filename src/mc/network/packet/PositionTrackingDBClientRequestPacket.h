#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/PositionTrackingId.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PositionTrackingDBClientRequestPacket : public ::Packet {
public:
    enum class Action : uchar {
        Query = 0x0,
    };

public:
    Action             mAction; // this+0x30
    PositionTrackingId mId;     // this+0x34

    // prevent constructor by default
    PositionTrackingDBClientRequestPacket& operator=(PositionTrackingDBClientRequestPacket const&);
    PositionTrackingDBClientRequestPacket(PositionTrackingDBClientRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PositionTrackingDBClientRequestPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PositionTrackingDBClientRequestPacket();

    // NOLINTEND
};
