#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/entity/components/PackedItemUseLegacyInventoryTransaction.h"
#include "mc/entity/components/PlayerBlockActions.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStackRequestData;
// clang-format on

struct PlayerActionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::bitset<39>>                                            mPlayerActions;
    ::ll::TypedStorage<8, 320, ::std::optional<::PackedItemUseLegacyInventoryTransaction>> mItemUseTransaction;
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
    MCNAPI PlayerActionComponent(::PlayerActionComponent&&);

#ifdef LL_PLAT_C
    MCNAPI void addAbortDestroyBlock(::BlockPos const& pos, int data);

    MCAPI void addContinueDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addCrackBlock(::BlockPos const& pos, int facing);

    MCNAPI void addItemStackRequest(::std::unique_ptr<::ItemStackRequestData> request);

    MCNAPI void addPredictDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addStartDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addStopDestroyBlock();

    MCNAPI void clear();
#endif

    MCNAPI ::PlayerActionComponent& operator=(::PlayerActionComponent&&);

    MCNAPI ~PlayerActionComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerActionComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
