#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TickSyncPacket : public ::Packet {
public:
    int64 mClientRequestTimestamp;           // this+0x30
    int64 mServerReceptionResponseTimestamp; // this+0x38

    // prevent constructor by default
    TickSyncPacket& operator=(TickSyncPacket const&);
    TickSyncPacket(TickSyncPacket const&);
    TickSyncPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TickSyncPacket@@UEAA@XZ
    virtual ~TickSyncPacket();

    // vIndex: 1, symbol: ?getId@TickSyncPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@TickSyncPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@TickSyncPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@TickSyncPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
