#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Abilities;
// clang-format on

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
    ::ll::UntypedStorage<8, 8> mUnkd654a8;
    ::ll::UntypedStorage<1, 1> mUnkd7c3d4;
    ::ll::UntypedStorage<2, 2> mUnkc5f44e;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestPermissionsPacketPayload& operator=(RequestPermissionsPacketPayload const&);
    RequestPermissionsPacketPayload(RequestPermissionsPacketPayload const&);
    RequestPermissionsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _setFromAbilities(::Abilities const& abilities);

    MCNAPI bool getCustomAbilityValue(::AbilitiesIndex ability) const;
    // NOLINTEND
};
