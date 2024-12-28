#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class UnlockedRecipesPacket : public ::Packet {
public:
    // UnlockedRecipesPacket inner types define
    enum class PacketType : uint {
        Empty                    = 0,
        InitiallyUnlockedRecipes = 1,
        NewlyUnlockedRecipes     = 2,
        RemoveUnlockedRecipes    = 3,
        RemoveAllUnlockedRecipes = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UnlockedRecipesPacket::PacketType> mPacketType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mUnlockedRecipes;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockedRecipesPacket& operator=(UnlockedRecipesPacket const&);
    UnlockedRecipesPacket(UnlockedRecipesPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~UnlockedRecipesPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnlockedRecipesPacket();

    MCAPI UnlockedRecipesPacket(::std::vector<::std::string> unlockedRecipes, ::UnlockedRecipesPacket::PacketType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::vector<::std::string> unlockedRecipes, ::UnlockedRecipesPacket::PacketType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
