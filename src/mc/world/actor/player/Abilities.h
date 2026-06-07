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
    // prevent constructor by default
    Abilities();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Abilities(::Abilities const& rhs);

    MCAPI explicit Abilities(bool setToDefaults);

    MCAPI void addSaveData(::CompoundTag& parentTag) const;

    MCFOLD void forEachAbility(
        ::std::function<void(::Ability&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                         requiredOptions
    );

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;

    MCFOLD void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

    MCAPI bool getBool(::AbilitiesIndex ability) const;

    MCAPI float getFloat(::AbilitiesIndex ability) const;

    MCAPI bool isAnyAbilitySet() const;

    MCAPI bool loadSaveData(::CompoundTag const& parentTag);

    MCAPI ::Abilities& operator=(::Abilities const& rhs);

    MCAPI void setAbility(::AbilitiesIndex ability, bool value);

    MCAPI void setAbility(::AbilitiesIndex abilityIndex, float value);

    MCAPI void setAbilityDiff(::AbilitiesIndex ability, bool value, bool& diff);

    MCAPI void setFromPermissions(::PlayerPermissionLevel permissions);

    MCAPI void unSet();

    MCAPI void unSet(::AbilitiesIndex val);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::Ability const, 20> _initDefaultAbilities();

    MCAPI static char const* getAbilityName(::AbilitiesIndex abilityIndex);

    MCAPI static ::Ability const& getDefault(::AbilitiesIndex abilityIndex);

#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string> getDiff(::Abilities const& lhs, ::Abilities const& rhs);
#endif

    MCAPI static ::AbilitiesIndex nameToAbilityIndex(::std::string const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<char const*, 20>& ABILITY_NAMES();

    MCAPI static ::std::string const& DIFF_ABILITIY_AT();

    MCAPI static ::Ability& INVALID_ABILITY();

    MCAPI static ::std::string const& SERIALIZATION_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Abilities const& rhs);

    MCAPI void* $ctor(bool setToDefaults);
    // NOLINTEND
};
