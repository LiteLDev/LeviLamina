#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
// clang-format on

struct AnimateEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> mRuntimeIds;
    ::ll::TypedStorage<8, 32, ::std::string>                   mAnimation;
    ::ll::TypedStorage<8, 32, ::std::string>                   mNextState;
    ::ll::TypedStorage<8, 32, ::std::string>                   mStopExpression;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                  mStopExpressionVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                   mController;
    ::ll::TypedStorage<4, 4, float>                            mBlendOutTime;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimateEntityPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimateEntityPacketPayload(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        stopExpressionVersion,
        ::std::string const&                   controller
    );

    MCAPI ~AnimateEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        stopExpressionVersion,
        ::std::string const&                   controller
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
