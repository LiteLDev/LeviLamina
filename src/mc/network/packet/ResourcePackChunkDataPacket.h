#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackChunkDataPacket : public ::Packet {
public:
    std::string        mResourceName; // this+0x30
    int                mChunkID;      // this+0x50
    uint64             mByteOffset;   // this+0x58
    std::vector<uchar> mData;         // this+0x60

    // prevent constructor by default
    ResourcePackChunkDataPacket& operator=(ResourcePackChunkDataPacket const&);
    ResourcePackChunkDataPacket(ResourcePackChunkDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourcePackChunkDataPacket@@UEAA@XZ
    virtual ~ResourcePackChunkDataPacket();

    // vIndex: 1, symbol: ?getId@ResourcePackChunkDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePackChunkDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ResourcePackChunkDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ResourcePackChunkDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ResourcePackChunkDataPacket@@QEAA@XZ
    MCAPI ResourcePackChunkDataPacket();

    // symbol:
    // ??0ResourcePackChunkDataPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_KAEBV?$vector@EV?$allocator@E@std@@@2@@Z
    MCAPI ResourcePackChunkDataPacket(
        std::string const&        name,
        int                       chunkID,
        uint64                    byteOffset,
        std::vector<uchar> const& data
    );

    // NOLINTEND
};
