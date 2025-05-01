#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionDescriptor;
class BlockDescriptor;
class BlockPos;
class Mob;
class Path;
class PathNavigation;
struct NavigationDescription;
// clang-format on

class NavigationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mAvoidDamageBlocks;
    ::ll::TypedStorage<1, 1, bool>                                mAvoidPortals;
    ::ll::TypedStorage<1, 1, bool>                                mAvoidSun;
    ::ll::TypedStorage<1, 1, bool>                                mAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                                mCanBreach;
    ::ll::TypedStorage<1, 1, bool>                                mCanFloat;
    ::ll::TypedStorage<1, 1, bool>                                mCanPathOverLava;
    ::ll::TypedStorage<1, 1, bool>                                mCanWalkInLava;
    ::ll::TypedStorage<1, 1, bool>                                mCanJump;
    ::ll::TypedStorage<1, 1, bool>                                mCanOpenDoors;
    ::ll::TypedStorage<1, 1, bool>                                mCanOpenIronDoors;
    ::ll::TypedStorage<1, 1, bool>                                mCanPassDoors;
    ::ll::TypedStorage<1, 1, bool>                                mCanSink;
    ::ll::TypedStorage<1, 1, bool>                                mIsAmphibious;
    ::ll::TypedStorage<1, 1, bool>                                mIsFollowingRivers;
    ::ll::TypedStorage<1, 1, bool>                                mHasEndPathRadius;
    ::ll::TypedStorage<1, 1, bool>                                mHasDestination;
    ::ll::TypedStorage<4, 4, int>                                 mTick;
    ::ll::TypedStorage<4, 4, int>                                 mTickTimeout;
    ::ll::TypedStorage<4, 4, int>                                 mLastStuckCheck;
    ::ll::TypedStorage<4, 4, float>                               mEndPathRadiusSqr;
    ::ll::TypedStorage<4, 4, float>                               mSpeed;
    ::ll::TypedStorage<4, 4, float>                               mTerminationThreshold;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mLastStuckCheckPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mTargetOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>   mBlocksToAvoid;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PathNavigation>> mNavigation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>           mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&);
    NavigationComponent(NavigationComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initMultiTypeNavigationComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCNAPI void initializeFromDefinition(::Mob& owner, ::NavigationDescription* description);

    MCNAPI ::NodeType isFree(
        ::Mob&            owner,
        ::BlockPos const& lastPathPos,
        ::BlockPos const& testPos,
        ::BlockPos const& size,
        ::CanJumpIntoNode jumpIntoNode
    );

    MCNAPI bool moveTo(::Mob& owner, ::std::unique_ptr<::Path> newPath, float speed);

    MCNAPI bool moveTo(::Mob& owner, ::Actor& target, float speed);

    MCNAPI ::NavigationComponent& operator=(::NavigationComponent&&);

    MCNAPI ~NavigationComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
