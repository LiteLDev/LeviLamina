#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
// clang-format on

struct CollisionShapes {
public:
    // CollisionShapes inner types declare
    // clang-format off
    struct BlockAndBlockPos;
    // clang-format on
    
    // CollisionShapes inner types define
    struct BlockAndBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
        ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mShapes;
    ::ll::TypedStorage<8, 24, ::std::vector<::CollisionShapes::BlockAndBlockPos>> mBlocks;
    ::ll::TypedStorage<1, 1, bool> mNearUnloadedChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionShapes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CollisionShapes(::CollisionShapes const&);

    MCAPI ::std::pair<::BlockPos, ::Block const*> getBlockPosCurrentlyStandingOn(::AABB box) const;

    MCAPI ::CollisionShapes& operator=(::CollisionShapes const&);

    MCAPI ::CollisionShapes& operator=(::CollisionShapes&&);

    MCAPI ~CollisionShapes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CollisionShapes const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
