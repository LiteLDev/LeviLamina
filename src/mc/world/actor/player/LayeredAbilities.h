#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>           mPermissions;
    ::ll::TypedStorage<4, 1440, ::std::array<::Abilities, 6>> mLayers;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    LayeredAbilities(LayeredAbilities const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayeredAbilities();

#ifdef LL_PLAT_S
    MCAPI LayeredAbilities(::LayeredAbilities const& other);
#endif

#ifdef LL_PLAT_C
    MCAPI void addSaveData(::CompoundTag& parentTag) const;

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, char const*)> const& callback,
        ::Ability::Options                                          requiredOptions
    ) const;
#endif

    MCAPI void forEachAbility(
        ::std::function<void(::Ability const&, ::AbilitiesIndex)> const& callback,
        ::Ability::Options                                               requiredOptions
    ) const;

#ifdef LL_PLAT_C
    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities&)> const& callback);
#endif

    MCFOLD void forEachLayer(::std::function<void(::AbilitiesLayer, ::Abilities const&)> const& callback) const;

    MCAPI ::Ability const& getAbility(::AbilitiesIndex val) const;

    MCAPI bool getBool(::AbilitiesIndex val) const;

#ifdef LL_PLAT_C
    MCAPI bool loadSaveData(::CompoundTag const& parentTag);
#endif

    MCAPI ::LayeredAbilities& operator=(::LayeredAbilities const& rhs);

    MCAPI void setPlayerPermissions(::PlayerPermissionLevel permissions);

#ifdef LL_PLAT_C
    MCAPI ~LayeredAbilities();
#endif
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
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& DIFF_LAYER_AT();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

#ifdef LL_PLAT_S
    MCAPI void* $ctor(::LayeredAbilities const& other);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
