#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/events/BlockEventDispatcherToken.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class BlockListEventMap;
// clang-format on

class BlockBreakSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                               mSensorRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mSensorPos;
    ::ll::TypedStorage<8, 32, ::BlockEventDispatcherToken>        mListener;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockListEventMap>> mBlockSets;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorFilterGroup>>  mSourceFilters;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakSensorComponent& operator=(BlockBreakSensorComponent const&);
    BlockBreakSensorComponent(BlockBreakSensorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockBreakSensorComponent(::BlockBreakSensorComponent&&);

    MCNAPI ::BlockBreakSensorComponent& operator=(::BlockBreakSensorComponent&&);

    MCNAPI ~BlockBreakSensorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockBreakSensorComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
