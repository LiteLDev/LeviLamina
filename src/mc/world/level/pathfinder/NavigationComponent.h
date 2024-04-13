#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CanJumpIntoNode.h"
#include "mc/enums/NodeType.h"

class NavigationComponent {
public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0NavigationComponent@@QEAA@XZ
    MCAPI NavigationComponent();

    // symbol: ??0NavigationComponent@@QEAA@AEBV0@@Z
    MCAPI NavigationComponent(class NavigationComponent const& other);

    // symbol:
    // ?createPath@NavigationComponent@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVMob@@AEAVActor@@@Z
    MCAPI std::unique_ptr<class Path> createPath(class Mob& owner, class Actor& target);

    // symbol:
    // ?createPath@NavigationComponent@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVMob@@AEBVVec3@@@Z
    MCAPI std::unique_ptr<class Path> createPath(class Mob& owner, class Vec3 const& position);

    // symbol: ?getAvoidDamageBlocks@NavigationComponent@@QEBA_NXZ
    MCAPI bool getAvoidDamageBlocks() const;

    // symbol: ?getAvoidPortals@NavigationComponent@@QEBA_NXZ
    MCAPI bool getAvoidPortals() const;

    // symbol: ?getAvoidSun@NavigationComponent@@QEBA_NXZ
    MCAPI bool getAvoidSun() const;

    // symbol: ?getAvoidWater@NavigationComponent@@QEBA_NXZ
    MCAPI bool getAvoidWater() const;

    // symbol:
    // ?getBlocksToAvoid@NavigationComponent@@QEBAAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor> const& getBlocksToAvoid() const;

    // symbol: ?getCanBreach@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanBreach() const;

    // symbol: ?getCanFloat@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanFloat() const;

    // symbol: ?getCanJump@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanJump() const;

    // symbol: ?getCanOpenDoors@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanOpenDoors() const;

    // symbol: ?getCanOpenIronDoors@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanOpenIronDoors() const;

    // symbol: ?getCanPassDoors@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanPassDoors() const;

    // symbol: ?getCanPathOverLava@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanPathOverLava() const;

    // symbol: ?getCanSink@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanSink() const;

    // symbol: ?getCanWalkInLava@NavigationComponent@@QEBA_NXZ
    MCAPI bool getCanWalkInLava() const;

    // symbol: ?getEndPathRadiusSqr@NavigationComponent@@QEBAMXZ
    MCAPI float getEndPathRadiusSqr() const;

    // symbol: ?getHasDestination@NavigationComponent@@QEBA_NXZ
    MCAPI bool getHasDestination() const;

    // symbol: ?getHasEndPathRadius@NavigationComponent@@QEBA_NXZ
    MCAPI bool getHasEndPathRadius() const;

    // symbol: ?getIsAmphibious@NavigationComponent@@QEBA_NXZ
    MCAPI bool getIsAmphibious() const;

    // symbol: ?getIsFollowingRivers@NavigationComponent@@QEBA_NXZ
    MCAPI bool getIsFollowingRivers() const;

    // symbol: ?getLastStuckCheckPosition@NavigationComponent@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getLastStuckCheckPosition() const;

    // symbol: ?getMaxDistance@NavigationComponent@@QEBAMAEBVActor@@@Z
    MCAPI float getMaxDistance(class Actor const& owner) const;

    // symbol: ?getPath@NavigationComponent@@QEBAPEAVPath@@XZ
    MCAPI class Path* getPath() const;

    // symbol: ?getSpeed@NavigationComponent@@QEBAMXZ
    MCAPI float getSpeed() const;

    // symbol: ?getTargetOffset@NavigationComponent@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getTargetOffset() const;

    // symbol: ?getTerminationThreshold@NavigationComponent@@QEBAMXZ
    MCAPI float getTerminationThreshold() const;

    // symbol: ?getTickTimeout@NavigationComponent@@QEBAHXZ
    MCAPI int getTickTimeout() const;

    // symbol: ?incrementTick@NavigationComponent@@QEAAXXZ
    MCAPI void incrementTick();

    // symbol: ?initMultiTypeNavigationComponent@NavigationComponent@@QEAAXAEAVMob@@AEAVActorDefinitionDescriptor@@@Z
    MCAPI void initMultiTypeNavigationComponent(class Mob& entity, class ActorDefinitionDescriptor& initDescription);

    // symbol: ?initializeFromDefinition@NavigationComponent@@QEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    MCAPI void initializeFromDefinition(class Mob& owner, struct NavigationDescription* description);

    // symbol: ?isDone@NavigationComponent@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ?isFree@NavigationComponent@@QEAA?AW4NodeType@@AEAVMob@@AEBVBlockPos@@11W4CanJumpIntoNode@@@Z
    MCAPI ::NodeType isFree(
        class Mob&            owner,
        class BlockPos const& lastPathPos,
        class BlockPos const& testPos,
        class BlockPos const& size,
        ::CanJumpIntoNode     jumpIntoNode
    );

    // symbol: ?isStuck@NavigationComponent@@QEBA_NH@Z
    MCAPI bool isStuck(int stuckTimeThreshold) const;

    // symbol: ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@AEAVActor@@M@Z
    MCAPI bool moveTo(class Mob& owner, class Actor& target, float speed);

    // symbol: ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@AEBVVec3@@M@Z
    MCAPI bool moveTo(class Mob& owner, class Vec3 const& position, float speed);

    // symbol: ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@V?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@M@Z
    MCAPI bool moveTo(class Mob& owner, std::unique_ptr<class Path> newPath, float speed);

    // symbol: ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@AEBVVec3@@M1@Z
    MCAPI bool moveTo(class Mob& owner, class Vec3 const& position, float speed, class Vec3 const& targetOffset);

    // symbol: ??4NavigationComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class NavigationComponent& operator=(class NavigationComponent&&);

    // symbol: ?resetPath@NavigationComponent@@QEAAXXZ
    MCAPI void resetPath();

    // symbol: ?setAvoidDamageBlocks@NavigationComponent@@QEAAX_N@Z
    MCAPI void setAvoidDamageBlocks(bool avoidDamageBlocks);

    // symbol: ?setAvoidPortals@NavigationComponent@@QEAAX_N@Z
    MCAPI void setAvoidPortals(bool avoidPortals);

    // symbol: ?setAvoidSun@NavigationComponent@@QEAAX_N@Z
    MCAPI void setAvoidSun(bool avoidSun);

    // symbol: ?setAvoidWater@NavigationComponent@@QEAAX_N@Z
    MCAPI void setAvoidWater(bool avoidWater);

    // symbol: ?setCanFloat@NavigationComponent@@QEAAX_N@Z
    MCAPI void setCanFloat(bool canFloat);

    // symbol: ?setCanJump@NavigationComponent@@QEAAX_N@Z
    MCAPI void setCanJump(bool canJump);

    // symbol: ?setCanOpenDoors@NavigationComponent@@QEAAX_N@Z
    MCAPI void setCanOpenDoors(bool canOpenDoors);

    // symbol: ?setCanPassDoors@NavigationComponent@@QEAAX_N@Z
    MCAPI void setCanPassDoors(bool canPass);

    // symbol: ?setCanSink@NavigationComponent@@QEAAX_N@Z
    MCAPI void setCanSink(bool canSink);

    // symbol: ?setEndPathRadius@NavigationComponent@@QEAAXM@Z
    MCAPI void setEndPathRadius(float radius);

    // symbol: ?setHasDestination@NavigationComponent@@QEAAX_N@Z
    MCAPI void setHasDestination(bool hasDestination);

    // symbol: ?setHasEndPathRadius@NavigationComponent@@QEAAX_N@Z
    MCAPI void setHasEndPathRadius(bool hasEndPathRadius);

    // symbol:
    // ?setInternalType@NavigationComponent@@QEAAXV?$unique_ptr@VPathNavigation@@U?$default_delete@VPathNavigation@@@std@@@std@@@Z
    MCAPI void setInternalType(std::unique_ptr<class PathNavigation> type);

    // symbol: ?setIsFollowingRivers@NavigationComponent@@QEAAX_N@Z
    MCAPI void setIsFollowingRivers(bool isFollowingRivers);

    // symbol: ?setPath@NavigationComponent@@QEAAXV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@@Z
    MCAPI void setPath(std::unique_ptr<class Path> path);

    // symbol: ?setSpeed@NavigationComponent@@QEAAXM@Z
    MCAPI void setSpeed(float speed);

    // symbol: ?setTargetOffset@NavigationComponent@@QEAAXAEBVVec3@@@Z
    MCAPI void setTargetOffset(class Vec3 const& targetOffset);

    // symbol: ?setTerminationThreshold@NavigationComponent@@QEAAXM@Z
    MCAPI void setTerminationThreshold(float threshold);

    // symbol: ?setTickTimeout@NavigationComponent@@QEAAXH@Z
    MCAPI void setTickTimeout(int timeout);

    // symbol: ?stop@NavigationComponent@@QEAAXAEAVMob@@@Z
    MCAPI void stop(class Mob& owner);

    // symbol: ?travel@NavigationComponent@@QEAA_NAEAVMob@@AEAM11@Z
    MCAPI bool travel(class Mob& owner, float& xa, float& ya, float& za);

    // symbol: ?update@NavigationComponent@@QEAAXAEAVMob@@@Z
    MCAPI void update(class Mob& owner);

    // symbol: ?updateLastStuckCheck@NavigationComponent@@QEAAXAEBVMob@@@Z
    MCAPI void updateLastStuckCheck(class Mob const& owner);

    // symbol: ??1NavigationComponent@@QEAA@XZ
    MCAPI ~NavigationComponent();

    // NOLINTEND
};
