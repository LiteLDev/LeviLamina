#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TickingAreasLoadStatusPacket : public ::Packet {
public:
    bool mWaitingForPreload; // this+0x30

    // prevent constructor by default
    TickingAreasLoadStatusPacket& operator=(TickingAreasLoadStatusPacket const&);
    TickingAreasLoadStatusPacket(TickingAreasLoadStatusPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TickingAreasLoadStatusPacket@@UEAA@XZ
    virtual ~TickingAreasLoadStatusPacket();

    // vIndex: 1, symbol: ?getId@TickingAreasLoadStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@TickingAreasLoadStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@TickingAreasLoadStatusPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@TickingAreasLoadStatusPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0TickingAreasLoadStatusPacket@@QEAA@XZ
    MCAPI TickingAreasLoadStatusPacket();

    // symbol: ??0TickingAreasLoadStatusPacket@@QEAA@_N@Z
    MCAPI explicit TickingAreasLoadStatusPacket(bool);

    // NOLINTEND
};
