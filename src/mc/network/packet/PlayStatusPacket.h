#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/PlayStatus.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/PlayStatus.h"
#include "mc/network/packet/Packet.h"

class PlayStatusPacket : public ::Packet {
public:
    PlayStatus mStatus; // this+0x30

    // prevent constructor by default
    PlayStatusPacket& operator=(PlayStatusPacket const&);
    PlayStatusPacket(PlayStatusPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayStatusPacket@@UEAA@XZ
    virtual ~PlayStatusPacket();

    // vIndex: 1, symbol: ?getId@PlayStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayStatusPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayStatusPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayStatusPacket@@QEAA@XZ
    MCAPI PlayStatusPacket();

    // symbol: ??0PlayStatusPacket@@QEAA@W4PlayStatus@@@Z
    MCAPI explicit PlayStatusPacket(::PlayStatus status);

    // NOLINTEND
};
