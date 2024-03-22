#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/PositionTrackingId.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

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
    // vIndex: 0, symbol: ??1PositionTrackingDBClientRequestPacket@@UEAA@XZ
    virtual ~PositionTrackingDBClientRequestPacket();

    // vIndex: 1, symbol: ?getId@PositionTrackingDBClientRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PositionTrackingDBClientRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PositionTrackingDBClientRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PositionTrackingDBClientRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PositionTrackingDBClientRequestPacket@@QEAA@XZ
    MCAPI PositionTrackingDBClientRequestPacket();

    // NOLINTEND
};
