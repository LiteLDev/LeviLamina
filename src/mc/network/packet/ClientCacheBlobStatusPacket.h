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
    // vIndex: 0
    virtual ~ClientCacheBlobStatusPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
