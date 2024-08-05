#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PacksInfoData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePacksInfoPacket : public ::Packet {
public:
    PacksInfoData                                    mData;
    std::vector<std::pair<std::string, std::string>> mCDNUrls;

    // prevent constructor by default
    ResourcePacksInfoPacket& operator=(ResourcePacksInfoPacket const&);
    ResourcePacksInfoPacket(ResourcePacksInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePacksInfoPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePacksInfoPacket();

    MCAPI ResourcePacksInfoPacket(
        bool,
        std::vector<struct PackInfoData>&,
        std::vector<struct PackInfoData>&,
        bool,
        std::vector<std::pair<std::string, std::string>>&&,
        bool
    );

    // NOLINTEND
};
