#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientCacheBlobStatusPacket : public ::Packet {
public:
    std::vector<uint64> mMissingIds; // this+0x30
    std::vector<uint64> mFoundIds;   // this+0x48

    // prevent constructor by default
    ClientCacheBlobStatusPacket& operator=(ClientCacheBlobStatusPacket const&);
    ClientCacheBlobStatusPacket(ClientCacheBlobStatusPacket const&);
    ClientCacheBlobStatusPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ClientCacheBlobStatusPacket() = default;

    // vIndex: 1, symbol: ?getId@ClientCacheBlobStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientCacheBlobStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientCacheBlobStatusPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ClientCacheBlobStatusPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
