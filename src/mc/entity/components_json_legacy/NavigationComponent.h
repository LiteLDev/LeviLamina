#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

class NavigationComponent {
public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&);

public:
    // NOLINTBEGIN
    MCAPI NavigationComponent();

    MCAPI NavigationComponent(class NavigationComponent const& other);

    MCAPI std::unique_ptr<class Path> createPath(class Mob& owner, class Actor& target);

    MCAPI std::unique_ptr<class Path> createPath(class Mob& owner, class Vec3 const& position);

    MCAPI bool getAvoidDamageBlocks() const;

    MCAPI bool getAvoidPortals() const;

    MCAPI bool getAvoidSun() const;

    MCAPI bool getAvoidWater() const;

    MCAPI std::vector<class BlockDescriptor> const& getBlocksToAvoid() const;

    MCAPI bool getCanBreach() const;

    MCAPI bool getCanFloat() const;

    MCAPI bool getCanJump() const;

    MCAPI bool getCanOpenDoors() const;

    MCAPI bool getCanOpenIronDoors() const;

    MCAPI bool getCanPassDoors() const;

    MCAPI bool getCanPathOverLava() const;

    MCAPI bool getCanSink() const;

    MCAPI bool getCanWalkInLava() const;

    MCAPI float getEndPathRadiusSqr() const;

    MCAPI bool getHasDestination() const;

    MCAPI bool getHasEndPathRadius() const;

    MCAPI bool getIsAmphibious() const;

    MCAPI bool getIsFollowingRivers() const;

    MCAPI class Vec3 getLastStuckCheckPosition() const;

    MCAPI float getMaxDistance(class Actor const& owner) const;

    MCAPI class Path* getPath() const;

    MCAPI float getSpeed() const;

    MCAPI class Vec3 const& getTargetOffset() const;

    MCAPI float getTerminationThreshold() const;

    MCAPI int getTickTimeout() const;

    MCAPI void incrementTick();

    MCAPI void initMultiTypeNavigationComponent(class Mob& entity, class ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(class Mob& owner, struct NavigationDescription* description);

    MCAPI bool isDone() const;

    MCAPI ::NodeType isFree(
        class Mob&            owner,
        class BlockPos const& lastPathPos,
        class BlockPos const& testPos,
        class BlockPos const& size,
        ::CanJumpIntoNode     jumpIntoNode
    );

    MCAPI bool isStuck(int stuckTimeThreshold) const;

    MCAPI bool moveTo(class Mob& owner, class Actor& target, float speed);

    MCAPI bool moveTo(class Mob& owner, class Vec3 const& position, float speed);

    MCAPI bool moveTo(class Mob& owner, std::unique_ptr<class Path> newPath, float speed);

    MCAPI bool moveTo(class Mob& owner, class Vec3 const& position, float speed, class Vec3 const& targetOffset);

    MCAPI class NavigationComponent& operator=(class NavigationComponent&&);

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

    MCAPI void setInternalType(std::unique_ptr<class PathNavigation> type);

    MCAPI void setIsFollowingRivers(bool isFollowingRivers);

    MCAPI void setPath(std::unique_ptr<class Path> path);

    MCAPI void setSpeed(float speed);

    MCAPI void setTargetOffset(class Vec3 const& targetOffset);

    MCAPI void setTerminationThreshold(float threshold);

    MCAPI void setTickTimeout(int timeout);

    MCAPI void stop(class Mob& owner);

    MCAPI bool travel(class Mob& owner, float& xa, float& ya, float& za);

    MCAPI void update(class Mob& owner);

    MCAPI void updateLastStuckCheck(class Mob const& owner);

    MCAPI ~NavigationComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
