#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class BlockEventDispatcherToken;
class BlockListEventMap;
class Vec3;
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
    MCAPI BlockBreakSensorComponent(::BlockBreakSensorComponent&&);

    MCAPI ::BlockBreakSensorComponent& operator=(::BlockBreakSensorComponent&&);

    MCAPI ~BlockBreakSensorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockBreakSensorComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
