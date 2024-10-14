#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/Ability.h"

class Abilities {
public:
    // prevent constructor by default
    Abilities();

public:
    // NOLINTBEGIN
    MCAPI explicit Abilities(bool setToDefaults);

    MCAPI Abilities(class Abilities const& rhs);

    MCAPI void addSaveData(class CompoundTag& parentTag) const;

    MCAPI void forEachAbility(
        std::function<void(class Ability&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                           requiredOptions
    );

    MCAPI void forEachAbility(
        std::function<void(class Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                                 requiredOptions
    ) const;

    MCAPI bool getBool(::AbilitiesIndex ability) const;

    MCAPI float getFloat(::AbilitiesIndex ability) const;

    MCAPI bool isAnyAbilitySet() const;

    MCAPI bool loadSaveData(class CompoundTag const& parentTag);

    MCAPI class Abilities& operator=(class Abilities const& rhs);

    MCAPI void setAbility(::AbilitiesIndex ability, bool value);

    MCAPI void setAbilityDiff(::AbilitiesIndex ability, bool value, bool& diff);

    MCAPI void setDefault();

    MCAPI void setFromPermissions(::PlayerPermissionLevel permissions);

    MCAPI void unSet();

    MCAPI void unSet(::AbilitiesIndex val);

    MCAPI static char const* getAbilityName(::AbilitiesIndex abilityIndex);

    MCAPI static class Ability const& getDefault(::AbilitiesIndex abilityIndex);

    MCAPI static ::AbilitiesIndex nameToAbilityIndex(std::string const& name);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static std::array<char const*, 19>& ABILITY_NAMES();

    MCAPI static std::string const& DIFF_ABILITIY_AT();

    MCAPI static class Ability& INVALID_ABILITY();

    MCAPI static std::string const& SERIALIZATION_TAG();

    // NOLINTEND
};
