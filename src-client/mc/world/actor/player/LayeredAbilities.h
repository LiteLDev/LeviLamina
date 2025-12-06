#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/actor/player/PermissionsHandler.h"

// auto generated forward declare list
// clang-format off
class Ability;
class CompoundTag;
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

    MCAPI void _handlePlayerPermissionsChange(::PlayerPermissionLevel from, ::PlayerPermissionLevel to);

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;

    MCAPI bool getBool(::AbilitiesIndex val) const;

    MCAPI bool loadSaveData(::CompoundTag const& parentTag);

    MCAPI void onSwitchToCustom();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::string> getDiff(::LayeredAbilities const& lhs, ::LayeredAbilities const& rhs);
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
