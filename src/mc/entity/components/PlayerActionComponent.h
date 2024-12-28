#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerActionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

struct PlayerActionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk95b4e4;
    ::ll::UntypedStorage<8, 312> mUnk478719;
    ::ll::UntypedStorage<8, 8>   mUnk317b59;
    ::ll::UntypedStorage<8, 24>  mUnke1e403;
    ::ll::UntypedStorage<4, 8>   mUnk6075a7;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerActionComponent();

    MCAPI PlayerActionComponent(::PlayerActionComponent&&);

    MCAPI void addAbortDestroyBlock(::BlockPos const& pos, int data);

    MCAPI void addAction(::PlayerActionType action);

    MCAPI void addContinueDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addStartDestroyBlock(::BlockPos const& pos, int facing);

    MCAPI void addStopDestroyBlock();

    MCAPI void clear();

    MCAPI ::PlayerActionComponent& operator=(::PlayerActionComponent&&);

    MCAPI ~PlayerActionComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    getDiffOfPlayerAuthInputPacket(::PlayerActionComponent const& lhs, ::PlayerActionComponent const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PlayerActionComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
