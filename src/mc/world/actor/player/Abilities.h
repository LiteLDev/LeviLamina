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
    Abilities& operator=(Abilities const&);
    Abilities();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Abilities(::Abilities const& rhs);

    MCNAPI explicit Abilities(bool setToDefaults);

    MCNAPI void addSaveData(::CompoundTag& parentTag) const;

    MCNAPI void forEachAbility(
        ::std::function<void(::Ability&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                         requiredOptions
    );

    MCNAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;

    MCNAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

    MCNAPI bool loadSaveData(::CompoundTag const& parentTag);

    MCNAPI void setFromPermissions(::PlayerPermissionLevel permissions);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::array<::Ability const, 20> _initDefaultAbilities();

#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::std::string> getDiff(::Abilities const& lhs, ::Abilities const& rhs);
#endif

    MCNAPI static ::AbilitiesIndex nameToAbilityIndex(::std::string const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::string const& DIFF_ABILITIY_AT();
#endif

    MCAPI static ::Ability& INVALID_ABILITY();

    MCNAPI static ::std::string const& SERIALIZATION_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Abilities const& rhs);

    MCNAPI void* $ctor(bool setToDefaults);
    // NOLINTEND
};
