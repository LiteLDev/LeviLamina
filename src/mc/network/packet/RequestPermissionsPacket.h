#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class RequestPermissionsPacket : public ::Packet {
public:
    // RequestPermissionsPacket inner types define
    enum class CustomPermissions : ushort {
        // bitfield representation
        Build            = 1 << 0,
        Mine             = 1 << 1,
        DoorsAndSwitches = 1 << 2,
        OpenContainers   = 1 << 3,
        AttackPlayers    = 1 << 4,
        AttackMobs       = 1 << 5,
        OperatorCommands = 1 << 6,
        Teleport         = 1 << 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>         mTargetPlayerId;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel> mPlayerPermissions;
    ::ll::TypedStorage<2, 2, ushort>                  mCustomPermissionFlags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~RequestPermissionsPacket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RequestPermissionsPacket();

    MCAPI bool getCustomAbilityValue(::AbilitiesIndex ability) const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCAPI ::ActorUniqueID getTargetPlayerId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
