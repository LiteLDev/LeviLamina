#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelChunkPacket : public ::Packet {
public:
    // prevent constructor by default
    LevelChunkPacket& operator=(LevelChunkPacket const&);
    LevelChunkPacket(LevelChunkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@LevelChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LevelChunkPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@LevelChunkPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0LevelChunkPacket@@QEAA@XZ
    MCAPI LevelChunkPacket();

    // symbol: ?pushSubChunkMetadata@LevelChunkPacket@@QEAAX_K@Z
    MCAPI void pushSubChunkMetadata(uint64);

    // symbol:
    // ?readCacheMetadata@LevelChunkPacket@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void, std::error_code> readCacheMetadata(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
