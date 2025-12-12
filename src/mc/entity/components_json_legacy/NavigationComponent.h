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
    bool                                                          mAvoidDamageBlocks : 1;
    bool                                                          mAvoidPortals      : 1;
    bool                                                          mAvoidSun          : 1;
    bool                                                          mAvoidWater        : 1;
    bool                                                          mCanBreach         : 1;
    bool                                                          mCanFloat          : 1;
    bool                                                          mCanPathOverLava   : 1;
    bool                                                          mCanWalkInLava     : 1;
    bool                                                          mCanJump           : 1;
    bool                                                          mCanOpenDoors      : 1;
    bool                                                          mCanOpenIronDoors  : 1;
    bool                                                          mCanPassDoors      : 1;
    bool                                                          mCanSink           : 1;
    bool                                                          mIsAmphibious      : 1;
    bool                                                          mIsFollowingRivers : 1;
    bool                                                          mHasEndPathRadius  : 1;
    bool                                                          mHasDestination    : 1;
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
    NavigationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NavigationComponent(::NavigationComponent const& other);

    MCAPI float getMaxDistance(::Actor const& owner) const;

    MCAPI void initMultiTypeNavigationComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::NavigationDescription* description);

    MCAPI ::NodeType isFree(
        ::Mob&            owner,
        ::BlockPos const& lastPathPos,
        ::BlockPos const& testPos,
        ::BlockPos const& size,
        ::CanJumpIntoNode jumpIntoNode
    );

    MCAPI bool moveTo(::Mob& owner, ::std::unique_ptr<::Path> newPath, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Actor const& target, float speed);

    MCAPI ::NavigationComponent& operator=(::NavigationComponent&&);

    MCAPI ~NavigationComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NavigationComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
