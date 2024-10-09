#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class UnlockedRecipesPacket : public ::Packet {
public:
    // UnlockedRecipesPacket inner types define
    enum class PacketType : int {
        Empty                    = 0x0,
        InitiallyUnlockedRecipes = 0x1,
        NewlyUnlockedRecipes     = 0x2,
        RemoveUnlockedRecipes    = 0x3,
        RemoveAllUnlockedRecipes = 0x4,
    };

public:
    PacketType               mPacketType;      // this+0x30
    std::vector<std::string> mUnlockedRecipes; // this+0x38

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

    MCAPI UnlockedRecipesPacket(std::vector<std::string> unlockedRecipes, ::UnlockedRecipesPacket::PacketType type);

    // NOLINTEND
};
