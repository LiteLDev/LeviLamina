#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RequestChunkRadiusPacket : public ::Packet {
public:
    int mChunkRadius; // this+0x30

    // prevent constructor by default
    RequestChunkRadiusPacket& operator=(RequestChunkRadiusPacket const&);
    RequestChunkRadiusPacket(RequestChunkRadiusPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RequestChunkRadiusPacket@@UEAA@XZ
    virtual ~RequestChunkRadiusPacket() = default;

    // vIndex: 1, symbol: ?getId@RequestChunkRadiusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RequestChunkRadiusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RequestChunkRadiusPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@RequestChunkRadiusPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RequestChunkRadiusPacket@@QEAA@XZ
    MCAPI RequestChunkRadiusPacket();

    // NOLINTEND
};
