#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/PermissionsHandler.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/AbilitiesLayer.h"
#include "mc/world/actor/player/Ability.h"

class LayeredAbilities {
public:
    PermissionsHandler       mPermissions;
    std::array<Abilities, 5> mLayers;

    // NOLINTBEGIN
    MCAPI LayeredAbilities();

    MCAPI LayeredAbilities(class LayeredAbilities const& other);

    MCAPI void addSaveData(class CompoundTag& parentTag) const;

    MCAPI void forEachAbility(
        std::function<void(class Ability const&, char const*)> const& callback,
        ::Ability::Options                                            requiredOptions
    ) const;

    MCAPI void forEachAbility(
        std::function<void(class Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                                 requiredOptions
    ) const;

    MCAPI void forEachLayer(std::function<void(::AbilitiesLayer, class Abilities&)> const& callback);

    MCAPI void forEachLayer(std::function<void(::AbilitiesLayer, class Abilities const&)> const& callback) const;

    MCAPI class Ability& getAbility(::AbilitiesLayer layer, ::AbilitiesIndex val);

    MCAPI class Ability const& getAbility(::AbilitiesIndex val) const;

    MCAPI bool getBool(::AbilitiesIndex val) const;

    MCAPI std::pair<bool, ::AbilitiesLayer> getBoolWithLayer(::AbilitiesIndex val) const;

    MCAPI ::CommandPermissionLevel getCommandPermissions() const;

    MCAPI std::pair<float, ::AbilitiesLayer> getFloatWithLayer(::AbilitiesIndex val) const;

    MCAPI class Abilities& getLayer(::AbilitiesLayer layer);

    MCAPI class PermissionsHandler& getPermissionsHandler();

    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCAPI bool loadSaveData(class CompoundTag const& parentTag);

    MCAPI class LayeredAbilities& operator=(class LayeredAbilities const& rhs);

    MCAPI void setAbility(::AbilitiesIndex val, bool value);

    MCAPI void setAbility(::AbilitiesIndex val, float value);

    MCAPI void setCommandPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPermissions(class PermissionsHandler const& permissions);

    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _handlePlayerPermissionsChange(::PlayerPermissionLevel from, ::PlayerPermissionLevel to);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static std::string const& DIFF_LAYER_AT();

    // NOLINTEND
};
