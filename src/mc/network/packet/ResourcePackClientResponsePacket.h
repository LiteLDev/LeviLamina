#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/ResourcePackResponse.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/ResourcePackResponse.h"
#include "mc/platform/Result.h"

class ResourcePackClientResponsePacket : public ::Packet {
public:
    std::set<std::string> mDownloadingPacks; // this+0x30
    ResourcePackResponse  mResponse;         // this+0x40

    // prevent constructor by default
    ResourcePackClientResponsePacket& operator=(ResourcePackClientResponsePacket const&);
    ResourcePackClientResponsePacket(ResourcePackClientResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackClientResponsePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePackClientResponsePacket();

    MCAPI std::set<std::string> const& getDownloadingPacks() const;

    MCAPI bool isResponse(::ResourcePackResponse haveThis) const;

    // NOLINTEND
};
