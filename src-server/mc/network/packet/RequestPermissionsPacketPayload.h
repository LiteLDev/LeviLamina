#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

struct RequestPermissionsPacketPayload {
public:
    // RequestPermissionsPacketPayload inner types define
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
    // member functions
    // NOLINTBEGIN
    MCAPI bool getCustomAbilityValue(::AbilitiesIndex ability) const;
    // NOLINTEND
};
