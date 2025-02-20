#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class Ability;
class PermissionsHandler;
// clang-format on

class LayeredAbilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::PermissionsHandler>            mPermissions;
    ::ll::TypedStorage<4, 1440, ::std::array<::Abilities, 6>> mLayers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayeredAbilities();

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_LAYER_AT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
