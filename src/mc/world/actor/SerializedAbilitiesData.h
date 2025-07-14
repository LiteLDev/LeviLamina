#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
// clang-format on

struct SerializedAbilitiesData {
public:
    // SerializedAbilitiesData inner types declare
    // clang-format off
    struct SerializedLayer;
    // clang-format on

    // SerializedAbilitiesData inner types define
    enum class SerializedAbilitiesLayer : ushort {
        CustomCache   = 0,
        Base          = 1,
        Spectator     = 2,
        Commands      = 3,
        Editor        = 4,
        LoadingScreen = 5,
    };

    struct SerializedLayer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::SerializedAbilitiesData::SerializedAbilitiesLayer> mSerializedLayer;
        ::ll::TypedStorage<4, 4, uint>                                                mAbilitiesSet;
        ::ll::TypedStorage<4, 4, uint>                                                mAbilityValues;
        ::ll::TypedStorage<4, 4, float>                                               mFlySpeed;
        ::ll::TypedStorage<4, 4, float>                                               mVerticalFlySpeed;
        ::ll::TypedStorage<4, 4, float>                                               mWalkSpeed;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                            mTargetPlayer;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                   mCommandPermissions;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>                                    mPlayerPermissions;
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedAbilitiesData::SerializedLayer>> mLayers;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedAbilitiesData& operator=(SerializedAbilitiesData const&);
    SerializedAbilitiesData(SerializedAbilitiesData const&);
    SerializedAbilitiesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedAbilitiesData(::SerializedAbilitiesData&&);

    MCAPI SerializedAbilitiesData(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities);

    MCAPI void fillIn(::LayeredAbilities& layeredAbilities) const;

    MCAPI ::SerializedAbilitiesData& operator=(::SerializedAbilitiesData&&);

    MCAPI ~SerializedAbilitiesData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::SerializedAbilitiesData::SerializedAbilitiesLayer, 6> const& ABILITIES_LAYER_MAP();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SerializedAbilitiesData&&);

    MCAPI void* $ctor(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
