#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
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
        ::ll::UntypedStorage<8, 8>  mUnk110a9c;
        ::ll::UntypedStorage<4, 12> mUnk52d08b;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockAndBlockPos& operator=(BlockAndBlockPos const&);
        BlockAndBlockPos(BlockAndBlockPos const&);
        BlockAndBlockPos();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8d7368;
    ::ll::UntypedStorage<8, 24> mUnke5f742;
    ::ll::UntypedStorage<1, 1>  mUnke03c26;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionShapes& operator=(CollisionShapes const&);
    CollisionShapes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CollisionShapes(::CollisionShapes const&);

    MCAPI void addCollisionShape(::AABB const& aabb);

    MCAPI void addCollisionShape(::AABB const& aabb, ::Block const& block, ::BlockPos const& blockPos);

    MCAPI ::std::pair<::BlockPos, ::Block const*> getBlockPosCurrentlyStandingOn(::AABB box) const;

    MCAPI ::CollisionShapes& operator=(::CollisionShapes&&);

    MCAPI void reserve(uint64 size);

    MCFOLD uint64 size() const;

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
