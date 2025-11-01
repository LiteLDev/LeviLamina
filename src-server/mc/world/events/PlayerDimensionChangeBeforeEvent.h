#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
// clang-format on

struct PlayerDimensionChangeBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, ::DimensionType> mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mFromLocation;
    ::ll::TypedStorage<4, 4, ::DimensionType> mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mToLocation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDimensionChangeBeforeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
