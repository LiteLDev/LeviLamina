#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
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
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChangeDimensionRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
