#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NetworkChunkPublisherUpdatePacket : public ::Packet {
public:
    BlockPos              mPosition;    // this+0x30
    uint                  mRadius;      // this+0x3C
    std::vector<ChunkPos> mSavedChunks; // this+0x40

    // prevent constructor by default
    NetworkChunkPublisherUpdatePacket& operator=(NetworkChunkPublisherUpdatePacket const&);
    NetworkChunkPublisherUpdatePacket(NetworkChunkPublisherUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetworkChunkPublisherUpdatePacket@@UEAA@XZ
    virtual ~NetworkChunkPublisherUpdatePacket();

    // vIndex: 1, symbol: ?getId@NetworkChunkPublisherUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@NetworkChunkPublisherUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@NetworkChunkPublisherUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@NetworkChunkPublisherUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0NetworkChunkPublisherUpdatePacket@@QEAA@XZ
    MCAPI NetworkChunkPublisherUpdatePacket();

    // symbol: ??0NetworkChunkPublisherUpdatePacket@@QEAA@AEBVBlockPos@@I@Z
    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const& position, uint radius);

    // NOLINTEND
};
