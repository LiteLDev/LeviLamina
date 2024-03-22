#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class OpenSignPacket : public ::Packet {
public:
    NetworkBlockPosition mPos;
    bool                 mIsFrontSide;

    // prevent constructor by default
    OpenSignPacket& operator=(OpenSignPacket const&);
    OpenSignPacket(OpenSignPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OpenSignPacket@@UEAA@XZ
    virtual ~OpenSignPacket();

    // vIndex: 1, symbol: ?getId@OpenSignPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@OpenSignPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@OpenSignPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@OpenSignPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0OpenSignPacket@@QEAA@XZ
    MCAPI OpenSignPacket();

    // symbol: ??0OpenSignPacket@@QEAA@AEBVBlockPos@@_N@Z
    MCAPI OpenSignPacket(class BlockPos const& pos, bool);

    // NOLINTEND
};
