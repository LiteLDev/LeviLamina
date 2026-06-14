#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionDescriptor;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NavigationComponent();

    MCAPI NavigationComponent(::NavigationComponent const& other);

    MCAPI ::std::unique_ptr<::Path> createPath(::Mob& owner, ::Vec3 const& position);

    MCAPI ::std::unique_ptr<::Path> createPath(::Mob& owner, ::Actor const& target);

    MCFOLD bool getAvoidDamageBlocks() const;

    MCAPI bool getAvoidPortals() const;

    MCAPI bool getAvoidSun() const;

    MCAPI bool getAvoidWater() const;

    MCFOLD ::std::vector<::BlockDescriptor> const& getBlocksToAvoid() const;

    MCAPI bool getCanBreach() const;

    MCAPI bool getCanFloat() const;

    MCAPI bool getCanJump() const;

    MCAPI bool getCanOpenDoors() const;

    MCAPI bool getCanOpenIronDoors() const;

    MCAPI bool getCanPassDoors() const;

    MCAPI bool getCanPathOverLava() const;

    MCAPI bool getCanSink() const;

    MCAPI bool getCanWalkInLava() const;

    MCFOLD float getEndPathRadiusSqr() const;

    MCAPI bool getHasDestination() const;

    MCAPI bool getHasEndPathRadius() const;

    MCAPI bool getIsAmphibious() const;

    MCAPI bool getIsFollowingRivers() const;

    MCAPI ::Vec3 getLastStuckCheckPosition() const;

    MCAPI float getMaxDistance(::Actor const& owner) const;

    MCFOLD ::Path* getPath() const;

    MCFOLD float getSpeed() const;

    MCFOLD ::Vec3 const& getTargetOffset() const;

    MCFOLD float getTerminationThreshold() const;

    MCFOLD int getTickTimeout() const;

    MCFOLD void incrementTick();

    MCAPI void initMultiTypeNavigationComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::NavigationDescription const* description);

    MCAPI bool isDone() const;

    MCAPI ::NodeType isFree(
        ::Mob&            owner,
        ::BlockPos const& lastPathPos,
        ::BlockPos const& testPos,
        ::BlockPos const& size,
        ::CanJumpIntoNode jumpIntoNode
    );

    MCAPI bool isStuck(int stuckTimeThreshold) const;

    MCAPI bool moveTo(::Mob& owner, ::std::unique_ptr<::Path> newPath, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Vec3 const& position, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Actor const& target, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Vec3 const& position, float speed, ::Vec3 const& targetOffset);

    MCAPI ::NavigationComponent& operator=(::NavigationComponent&&);

    MCAPI void resetPath();

    MCAPI void setAvoidDamageBlocks(bool avoidDamageBlocks);

    MCAPI void setAvoidPortals(bool avoidPortals);

    MCAPI void setAvoidSun(bool avoidSun);

    MCAPI void setAvoidWater(bool avoidWater);

    MCAPI void setCanFloat(bool canFloat);

    MCAPI void setCanJump(bool canJump);

    MCAPI void setCanOpenDoors(bool canOpenDoors);

    MCAPI void setCanPassDoors(bool canPass);

    MCAPI void setCanSink(bool canSink);

    MCAPI void setEndPathRadius(float radius);

    MCAPI void setHasDestination(bool hasDestination);

    MCAPI void setHasEndPathRadius(bool hasEndPathRadius);

    MCFOLD void setInternalType(::std::unique_ptr<::PathNavigation> type);

    MCAPI void setIsFollowingRivers(bool isFollowingRivers);

    MCAPI void setPath(::std::unique_ptr<::Path> path);

    MCFOLD void setSpeed(float speed);

    MCFOLD void setTargetOffset(::Vec3 const& targetOffset);

    MCFOLD void setTerminationThreshold(float threshold);

    MCFOLD void setTickTimeout(int timeout);

    MCAPI void stop(::Mob& owner);

    MCAPI bool travel(::Mob& owner, float& xa, float& ya, float& za);

    MCAPI void update(::Mob& owner);

    MCAPI void updateLastStuckCheck(::Mob const& owner);

    MCAPI ~NavigationComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::NavigationComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
