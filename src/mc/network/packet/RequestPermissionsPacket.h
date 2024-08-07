#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

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
};
