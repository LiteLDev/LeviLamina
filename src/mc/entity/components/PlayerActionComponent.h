#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/entity/components/PackedItemUseLegacyInventoryTransaction.h"
#include "mc/entity/components/PlayerBlockActions.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestData;
// clang-format on

struct PlayerActionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::bitset<38>>                                            mPlayerActions;
    ::ll::TypedStorage<8, 312, ::std::optional<::PackedItemUseLegacyInventoryTransaction>> mItemUseTransaction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestData>>                    mItemStackRequest;
    ::ll::TypedStorage<8, 24, ::PlayerBlockActions>                                        mPlayerBlockActions;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                       mPreSimulationRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);
    PlayerActionComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerActionComponent(::PlayerActionComponent&&);

    MCAPI ::PlayerActionComponent& operator=(::PlayerActionComponent&&);

    MCAPI ~PlayerActionComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerActionComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
