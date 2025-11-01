#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Abilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 240, ::std::array<::Ability, 20>> mAbilities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _initAbilityOptions();

    MCAPI void addSaveData(::CompoundTag& parentTag) const;

    MCAPI bool loadSaveData(::CompoundTag const& parentTag);

    MCAPI void setFromPermissions(::PlayerPermissionLevel permissions);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Ability const& getDefault(::AbilitiesIndex abilityIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<char const*, 20>& ABILITY_NAMES();

    MCAPI static ::std::string const& DIFF_ABILITIY_AT();

    MCAPI static ::Ability& INVALID_ABILITY();

    MCAPI static ::std::string const& SERIALIZATION_TAG();
    // NOLINTEND

};
