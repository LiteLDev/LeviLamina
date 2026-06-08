#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/player/AbilitiesLayer.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/AbilitiesLayer.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/actor/player/PermissionsHandler.h"

// auto generated forward declare list
// clang-format off
class Ability;
class CompoundTag;
// clang-format on

class LayeredAbilities {
public:
    LLNDAPI Ability& getAbility(::AbilitiesIndex val);
    LLNDAPI Ability& getAbility(::AbilitiesLayer layer, ::AbilitiesIndex val);
    LLAPI bool       setAbility(::AbilitiesIndex val, float value);
    LLAPI bool       setAbility(::AbilitiesIndex val, bool value);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>           mPermissions;
    ::ll::TypedStorage<4, 1440, ::std::array<::Abilities, 6>> mLayers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayeredAbilities();

    MCAPI LayeredAbilities(::LayeredAbilities const& other);

    MCAPI void addSaveData(::CompoundTag& parentTag) const;

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities&)> const& callback);

    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities const&)> const& callback) const;

    MCAPI ::Ability const& getAbility(::AbilitiesIndex val) const;

    MCAPI bool getBool(::AbilitiesIndex val) const;

    MCAPI ::std::pair<bool, ::AbilitiesLayer> getBoolWithLayer(::AbilitiesIndex val) const;

    MCFOLD ::CommandPermissionLevel getCommandPermissions() const;

#ifdef LL_PLAT_C
    MCAPI float getFloat(::AbilitiesIndex val) const;
#endif

    MCAPI ::std::pair<float, ::AbilitiesLayer> getFloatWithLayer(::AbilitiesIndex val) const;

#ifdef LL_PLAT_C
    MCFOLD ::Abilities const& getLayer(::AbilitiesLayer layer) const;
#endif

    MCFOLD ::Abilities& getLayer(::AbilitiesLayer layer);

    MCFOLD ::PermissionsHandler& getPermissionsHandler();

    MCFOLD ::PlayerPermissionLevel getPlayerPermissions() const;

#ifdef LL_PLAT_C
    MCAPI bool isOperator() const;
#endif

    MCAPI bool loadSaveData(::CompoundTag const& parentTag);

#ifdef LL_PLAT_C
    MCAPI void onSwitchToCustom();

    MCAPI bool operator!=(::LayeredAbilities const& rhs) const;
#endif

    MCAPI ::LayeredAbilities& operator=(::LayeredAbilities const& rhs);

    MCFOLD void setCommandPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPermissions(::PermissionsHandler const& permissions);

    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);

    MCAPI ~LayeredAbilities();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string> getDiff(::LayeredAbilities const& lhs, ::LayeredAbilities const& rhs);
#endif
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
