#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/blob_cache/Blob.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientCacheMissResponsePacket : public ::Packet {
public:
    std::vector<std::shared_ptr<ClientBlobCache::Server::Blob>> mWriteMissingContent;    // this+0x30
    std::unordered_map<uint64, std::string>                     mReceivedMissingContent; // this+0x48

    // prevent constructor by default
    ClientCacheMissResponsePacket& operator=(ClientCacheMissResponsePacket const&);
    ClientCacheMissResponsePacket(ClientCacheMissResponsePacket const&);
    ClientCacheMissResponsePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ClientCacheMissResponsePacket@@UEAA@XZ
    virtual ~ClientCacheMissResponsePacket();

    // vIndex: 1, symbol: ?getId@ClientCacheMissResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientCacheMissResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ClientCacheMissResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ClientCacheMissResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
