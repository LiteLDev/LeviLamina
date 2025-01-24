#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class Vec3;
// clang-format on

class ChangeDimensionRequest {
public:
    // ChangeDimensionRequest inner types define
    enum class State : int {
        PrepareRegion     = 0,
        WaitingForChunks  = 1,
        WaitingForRespawn = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ChangeDimensionRequest::State>  mState;
    ::ll::TypedStorage<4, 4, ::DimensionType>                  mFromDimensionId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                  mToDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mFromLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mToLocation;
    ::ll::TypedStorage<1, 1, bool>                             mUsePortal;
    ::ll::TypedStorage<1, 1, bool>                             mRespawn;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mAgentTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChangeDimensionRequest();

    MCAPI ChangeDimensionRequest(::ChangeDimensionRequest&&);

    MCAPI ChangeDimensionRequest(
        ::DimensionType fromId,
        ::DimensionType toId,
        ::Vec3          fromLocation,
        ::Vec3          toLocation,
        bool            usePortal,
        bool            respawn
    );

    MCAPI ::ChangeDimensionRequest& operator=(::ChangeDimensionRequest&&);

    MCAPI ~ChangeDimensionRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ChangeDimensionRequest&&);

    MCAPI void* $ctor(
        ::DimensionType fromId,
        ::DimensionType toId,
        ::Vec3          fromLocation,
        ::Vec3          toLocation,
        bool            usePortal,
        bool            respawn
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
