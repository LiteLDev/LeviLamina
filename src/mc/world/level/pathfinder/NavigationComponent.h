#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NavigationComponent {

public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&) = delete;

public:
    /**
     * @symbol ??0NavigationComponent\@\@QEAA\@XZ
     */
    MCAPI NavigationComponent(); // NOLINT
    /**
     * @symbol ??0NavigationComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI NavigationComponent(class NavigationComponent const&); // NOLINT
    /**
     * @symbol
     * ?createPath\@NavigationComponent\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?createPath\@NavigationComponent\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob&, class Actor&); // NOLINT
    /**
     * @symbol ?getAvoidDamageBlocks\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidDamageBlocks() const; // NOLINT
    /**
     * @symbol ?getAvoidPortals\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidPortals() const; // NOLINT
    /**
     * @symbol ?getAvoidSun\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidSun() const; // NOLINT
    /**
     * @symbol ?getAvoidWater\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidWater() const; // NOLINT
    /**
     * @symbol
     * ?getBlocksToAvoid\@NavigationComponent\@\@QEBAAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockDescriptor> const& getBlocksToAvoid() const; // NOLINT
    /**
     * @symbol ?getCanBreach\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanBreach() const; // NOLINT
    /**
     * @symbol ?getCanFloat\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanFloat() const; // NOLINT
    /**
     * @symbol ?getCanJump\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanJump() const; // NOLINT
    /**
     * @symbol ?getCanOpenDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanOpenDoors() const; // NOLINT
    /**
     * @symbol ?getCanOpenIronDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanOpenIronDoors() const; // NOLINT
    /**
     * @symbol ?getCanPassDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanPassDoors() const; // NOLINT
    /**
     * @symbol ?getCanPathOverLava\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanPathOverLava() const; // NOLINT
    /**
     * @symbol ?getCanSink\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanSink() const; // NOLINT
    /**
     * @symbol ?getCanWalkInLava\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanWalkInLava() const; // NOLINT
    /**
     * @symbol ?getEndPathRadiusSqr\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getEndPathRadiusSqr() const; // NOLINT
    /**
     * @symbol ?getHasDestination\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasDestination() const; // NOLINT
    /**
     * @symbol ?getHasEndPathRadius\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasEndPathRadius() const; // NOLINT
    /**
     * @symbol ?getIsAmphibious\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsAmphibious() const; // NOLINT
    /**
     * @symbol ?getIsFollowingRivers\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFollowingRivers() const; // NOLINT
    /**
     * @symbol ?getLastStuckCheckPosition\@NavigationComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getLastStuckCheckPosition() const; // NOLINT
    /**
     * @symbol ?getMaxDistance\@NavigationComponent\@\@QEBAMAEBVActor\@\@\@Z
     */
    MCAPI float getMaxDistance(class Actor const&) const; // NOLINT
    /**
     * @symbol ?getPath\@NavigationComponent\@\@QEBAPEAVPath\@\@XZ
     */
    MCAPI class Path* getPath() const; // NOLINT
    /**
     * @symbol ?getSpeed\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getSpeed() const; // NOLINT
    /**
     * @symbol ?getTargetOffset\@NavigationComponent\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getTargetOffset() const; // NOLINT
    /**
     * @symbol ?getTerminationThreshold\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getTerminationThreshold() const; // NOLINT
    /**
     * @symbol ?getTickTimeout\@NavigationComponent\@\@QEBAHXZ
     */
    MCAPI int getTickTimeout() const; // NOLINT
    /**
     * @symbol ?incrementTick\@NavigationComponent\@\@QEAAXXZ
     */
    MCAPI void incrementTick(); // NOLINT
    /**
     * @symbol
     * ?initMultiTypeNavigationComponent\@NavigationComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeNavigationComponent(class Mob&, class ActorDefinitionDescriptor&); // NOLINT
    /**
     * @symbol ?initializeFromDefinition\@NavigationComponent\@\@QEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob&, struct NavigationDescription*); // NOLINT
    /**
     * @symbol ?isDone\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const; // NOLINT
    /**
     * @symbol ?isFree\@NavigationComponent\@\@QEAA?AW4NodeType\@\@AEAVMob\@\@AEBVBlockPos\@\@11W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(
        class Mob&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        enum class CanJumpIntoNode
    ); // NOLINT
    /**
     * @symbol ?isStuck\@NavigationComponent\@\@QEBA_NH\@Z
     */
    MCAPI bool isStuck(int) const; // NOLINT
    /**
     * @symbol ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEAVActor\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob&, class Actor&, float); // NOLINT
    /**
     * @symbol ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEBVVec3\@\@M1\@Z
     */
    MCAPI bool moveTo(class Mob&, class Vec3 const&, float, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@V?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob&, std::unique_ptr<class Path>, float); // NOLINT
    /**
     * @symbol ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob&, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ??4NavigationComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NavigationComponent& operator=(class NavigationComponent&&); // NOLINT
    /**
     * @symbol ?resetPath\@NavigationComponent\@\@QEAAXXZ
     */
    MCAPI void resetPath(); // NOLINT
    /**
     * @symbol ?setAvoidDamageBlocks\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidDamageBlocks(bool); // NOLINT
    /**
     * @symbol ?setAvoidPortals\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidPortals(bool); // NOLINT
    /**
     * @symbol ?setAvoidSun\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidSun(bool); // NOLINT
    /**
     * @symbol ?setAvoidWater\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidWater(bool); // NOLINT
    /**
     * @symbol ?setCanFloat\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanFloat(bool); // NOLINT
    /**
     * @symbol ?setCanJump\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanJump(bool); // NOLINT
    /**
     * @symbol ?setCanOpenDoors\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanOpenDoors(bool); // NOLINT
    /**
     * @symbol ?setCanPassDoors\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanPassDoors(bool); // NOLINT
    /**
     * @symbol ?setCanSink\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanSink(bool); // NOLINT
    /**
     * @symbol ?setEndPathRadius\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setEndPathRadius(float); // NOLINT
    /**
     * @symbol ?setHasDestination\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDestination(bool); // NOLINT
    /**
     * @symbol ?setHasEndPathRadius\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasEndPathRadius(bool); // NOLINT
    /**
     * @symbol
     * ?setInternalType\@NavigationComponent\@\@QEAAXV?$unique_ptr\@VPathNavigation\@\@U?$default_delete\@VPathNavigation\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class PathNavigation>); // NOLINT
    /**
     * @symbol ?setIsFollowingRivers\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsFollowingRivers(bool); // NOLINT
    /**
     * @symbol
     * ?setPath\@NavigationComponent\@\@QEAAXV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setPath(std::unique_ptr<class Path>); // NOLINT
    /**
     * @symbol ?setSpeed\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSpeed(float); // NOLINT
    /**
     * @symbol ?setTargetOffset\@NavigationComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setTargetOffset(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setTerminationThreshold\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setTerminationThreshold(float); // NOLINT
    /**
     * @symbol ?setTickTimeout\@NavigationComponent\@\@QEAAXH\@Z
     */
    MCAPI void setTickTimeout(int); // NOLINT
    /**
     * @symbol ?stop\@NavigationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void stop(class Mob&); // NOLINT
    /**
     * @symbol ?travel\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEAM11\@Z
     */
    MCAPI bool travel(class Mob&, float&, float&, float&); // NOLINT
    /**
     * @symbol ?update\@NavigationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob&); // NOLINT
    /**
     * @symbol ?updateLastStuckCheck\@NavigationComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void updateLastStuckCheck(class Mob const&); // NOLINT
    /**
     * @symbol ??1NavigationComponent\@\@QEAA\@XZ
     */
    MCAPI ~NavigationComponent(); // NOLINT
};
