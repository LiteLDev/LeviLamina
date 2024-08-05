#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UnlockedRecipesPacket : public ::Packet {
public:
    // UnlockedRecipesPacket inner types define
    enum class PacketType {};

public:
    // prevent constructor by default
    UnlockedRecipesPacket& operator=(UnlockedRecipesPacket const&);
    UnlockedRecipesPacket(UnlockedRecipesPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnlockedRecipesPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UnlockedRecipesPacket();

    MCAPI UnlockedRecipesPacket(std::vector<std::string>, ::UnlockedRecipesPacket::PacketType type);

    // NOLINTEND
};
