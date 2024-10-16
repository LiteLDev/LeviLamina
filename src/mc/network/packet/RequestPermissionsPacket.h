#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

class RequestPermissionsPacket : public ::Packet {
public:
    ActorUniqueID         mTargetPlayerId;        // this+0x30
    PlayerPermissionLevel mPlayerPermissions;     // this+0x38
    ushort                mCustomPermissionFlags; // this+0x3A

    // prevent constructor by default
    RequestPermissionsPacket& operator=(RequestPermissionsPacket const&);
    RequestPermissionsPacket(RequestPermissionsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RequestPermissionsPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI RequestPermissionsPacket();

    MCAPI bool getCustomAbilityValue(::AbilitiesIndex ability) const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCAPI struct ActorUniqueID getTargetPlayerId() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
