#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PositionTrackingDBServerBroadcastPacket : public ::Packet {
public:
    // prevent constructor by default
    PositionTrackingDBServerBroadcastPacket& operator=(PositionTrackingDBServerBroadcastPacket const&) = delete;
    PositionTrackingDBServerBroadcastPacket(PositionTrackingDBServerBroadcastPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PositionTrackingDBServerBroadcastPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PositionTrackingDBServerBroadcastPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PositionTrackingDBServerBroadcastPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@PositionTrackingDBServerBroadcastPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1PositionTrackingDBServerBroadcastPacket@@UEAA@XZ
    MCVAPI ~PositionTrackingDBServerBroadcastPacket();

    // symbol: ??0PositionTrackingDBServerBroadcastPacket@@QEAA@XZ
    MCAPI PositionTrackingDBServerBroadcastPacket();

    // NOLINTEND
};
