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
    ClientCacheMissResponsePacket& operator=(ClientCacheMissResponsePacket const&) = delete;
    ClientCacheMissResponsePacket(ClientCacheMissResponsePacket const&)            = delete;
    ClientCacheMissResponsePacket()                                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ClientCacheMissResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientCacheMissResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientCacheMissResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ClientCacheMissResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1ClientCacheMissResponsePacket@@UEAA@XZ
    MCVAPI ~ClientCacheMissResponsePacket();

    // NOLINTEND
};
