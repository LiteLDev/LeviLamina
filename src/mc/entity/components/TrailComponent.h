#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
// clang-format on

struct TrailComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const*>                mReplacementBlock;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>               mSpawnCondition;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mSpawnOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mReplaceableBlocks;
    ::ll::TypedStorage<4, 4, int>                               mRadius;
    ::ll::TypedStorage<1, 1, bool>                              mForceReplaceMatchedBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    TrailComponent& operator=(TrailComponent const&);
    TrailComponent(TrailComponent const&);
    TrailComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initFromDefinition(::Actor const& actor);

    MCAPI ::TrailComponent& operator=(::TrailComponent&&);

    MCAPI ~TrailComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
