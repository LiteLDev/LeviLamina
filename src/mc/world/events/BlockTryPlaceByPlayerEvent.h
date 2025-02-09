#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class EntityContext;
class Vec3;
// clang-format on

struct BlockTryPlaceByPlayerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos const>           mPos;
    ::ll::TypedStorage<1, 1, uchar const>                 mFace;
    ::ll::TypedStorage<4, 12, ::Vec3 const>               mFaceLocation;
    ::ll::TypedStorage<8, 8, ::Block const&>              mPermutationToPlace;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockTryPlaceByPlayerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
