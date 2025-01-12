#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/AbilitiesLayer.h"
#include "mc/world/actor/player/Ability.h"

// auto generated forward declare list
// clang-format off
class Abilities;
class Ability;
class CompoundTag;
class PermissionsHandler;
// clang-format on

class LayeredAbilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::PermissionsHandler>            mPermissions;
    ::ll::TypedStorage<4, 1368, ::std::array<::Abilities, 6>> mLayers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayeredAbilities();

    MCAPI LayeredAbilities(::LayeredAbilities const& other);

    MCAPI void addSaveData(::CompoundTag& parentTag) const;

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;

    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities&)> const& callback);

    MCAPI void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities const&)> const&) const;

    MCAPI ::Ability const& getAbility(::AbilitiesIndex val) const;

    MCAPI ::Ability& getAbility(::AbilitiesLayer layer, ::AbilitiesIndex val);

    MCAPI bool getBool(::AbilitiesIndex val) const;

    MCAPI ::std::pair<bool, ::AbilitiesLayer> getBoolWithLayer(::AbilitiesIndex val) const;

    MCFOLD ::CommandPermissionLevel getCommandPermissions() const;

    MCAPI ::std::pair<float, ::AbilitiesLayer> getFloatWithLayer(::AbilitiesIndex val) const;

    MCAPI ::Abilities& getLayer(::AbilitiesLayer layer);

    MCFOLD ::PermissionsHandler& getPermissionsHandler();

    MCFOLD ::PlayerPermissionLevel getPlayerPermissions() const;

    MCAPI bool loadSaveData(::CompoundTag const& parentTag);

    MCAPI ::LayeredAbilities& operator=(::LayeredAbilities const& rhs);

    MCAPI void setAbility(::AbilitiesIndex val, float value);

    MCAPI void setAbility(::AbilitiesIndex val, bool value);

    MCFOLD void setCommandPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPermissions(::PermissionsHandler const& permissions);

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

    MCAPI void* $ctor(::LayeredAbilities const& other);
    // NOLINTEND
};
