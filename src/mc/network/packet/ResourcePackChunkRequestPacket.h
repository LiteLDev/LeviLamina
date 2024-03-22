#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackChunkRequestPacket : public ::Packet {
public:
    std::string mResourceName; // this+0x30
    int         mChunk;        // this+0x50

    // prevent constructor by default
    ResourcePackChunkRequestPacket& operator=(ResourcePackChunkRequestPacket const&);
    ResourcePackChunkRequestPacket(ResourcePackChunkRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ResourcePackChunkRequestPacket@@UEAA@XZ
    virtual ~ResourcePackChunkRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@ResourcePackChunkRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ResourcePackChunkRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ResourcePackChunkRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ResourcePackChunkRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ResourcePackChunkRequestPacket@@QEAA@XZ
    MCAPI ResourcePackChunkRequestPacket();

    // NOLINTEND
};
