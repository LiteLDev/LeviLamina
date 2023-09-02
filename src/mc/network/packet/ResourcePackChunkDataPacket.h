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
    ResourcePackChunkDataPacket& operator=(ResourcePackChunkDataPacket const&) = delete;
    ResourcePackChunkDataPacket(ResourcePackChunkDataPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ResourcePackChunkDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePackChunkDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ResourcePackChunkDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ResourcePackChunkDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ResourcePackChunkDataPacket@@UEAA@XZ
    MCVAPI ~ResourcePackChunkDataPacket();

    // symbol:
    // ??0ResourcePackChunkDataPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_KAEBV?$vector@EV?$allocator@E@std@@@2@@Z
    MCAPI ResourcePackChunkDataPacket(std::string const&, int, uint64, std::vector<uchar> const&);

    // symbol: ??0ResourcePackChunkDataPacket@@QEAA@XZ
    MCAPI ResourcePackChunkDataPacket();

    // NOLINTEND
};
