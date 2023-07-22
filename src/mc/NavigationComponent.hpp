/**
 * @file  NavigationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NavigationComponent.
 *
 */
class NavigationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONCOMPONENT
public:
    class NavigationComponent& operator=(class NavigationComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0NavigationComponent\@\@QEAA\@XZ
     */
    MCAPI NavigationComponent();
    /**
     * @symbol  ??0NavigationComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI NavigationComponent(class NavigationComponent const &);
    /**
     * @symbol  ?createPath\@NavigationComponent\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob &, class Actor &);
    /**
     * @symbol  ?createPath\@NavigationComponent\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob &, class Vec3 const &);
    /**
     * @symbol  ?getAvoidDamageBlocks\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidDamageBlocks() const;
    /**
     * @symbol  ?getAvoidPortals\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidPortals() const;
    /**
     * @symbol  ?getAvoidSun\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidSun() const;
    /**
     * @symbol  ?getAvoidWater\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidWater() const;
    /**
     * @symbol  ?getBlocksToAvoid\@NavigationComponent\@\@QEBAAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockDescriptor> const & getBlocksToAvoid() const;
    /**
     * @symbol  ?getCanBreach\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanBreach() const;
    /**
     * @symbol  ?getCanFloat\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanFloat() const;
    /**
     * @symbol  ?getCanJump\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanJump() const;
    /**
     * @symbol  ?getCanOpenDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanOpenDoors() const;
    /**
     * @symbol  ?getCanOpenIronDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanOpenIronDoors() const;
    /**
     * @symbol  ?getCanPassDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanPassDoors() const;
    /**
     * @symbol  ?getCanPathOverLava\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanPathOverLava() const;
    /**
     * @symbol  ?getCanSink\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanSink() const;
    /**
     * @symbol  ?getCanWalkInLava\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanWalkInLava() const;
    /**
     * @symbol  ?getEndPathRadiusSqr\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getEndPathRadiusSqr() const;
    /**
     * @symbol  ?getHasDestination\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasDestination() const;
    /**
     * @symbol  ?getHasEndPathRadius\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasEndPathRadius() const;
    /**
     * @symbol  ?getIsAmphibious\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsAmphibious() const;
    /**
     * @symbol  ?getIsFollowingRivers\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFollowingRivers() const;
    /**
     * @symbol  ?getLastStuckCheckPosition\@NavigationComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getLastStuckCheckPosition() const;
    /**
     * @symbol  ?getMaxDistance\@NavigationComponent\@\@QEBAMAEBVActor\@\@\@Z
     */
    MCAPI float getMaxDistance(class Actor const &) const;
    /**
     * @symbol  ?getPath\@NavigationComponent\@\@QEBAPEAVPath\@\@XZ
     */
    MCAPI class Path * getPath() const;
    /**
     * @symbol  ?getSpeed\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getSpeed() const;
    /**
     * @symbol  ?getTargetOffset\@NavigationComponent\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getTargetOffset() const;
    /**
     * @symbol  ?getTerminationThreshold\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getTerminationThreshold() const;
    /**
     * @symbol  ?getTickTimeout\@NavigationComponent\@\@QEBAHXZ
     */
    MCAPI int getTickTimeout() const;
    /**
     * @symbol  ?incrementTick\@NavigationComponent\@\@QEAAXXZ
     */
    MCAPI void incrementTick();
    /**
     * @symbol  ?initMultiTypeNavigationComponent\@NavigationComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeNavigationComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @symbol  ?initializeFromDefinition\@NavigationComponent\@\@QEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct NavigationDescription *);
    /**
     * @symbol  ?isDone\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @symbol  ?isFree\@NavigationComponent\@\@QEAA?AW4NodeType\@\@AEAVMob\@\@AEBVBlockPos\@\@11W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class Mob &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode);
    /**
     * @symbol  ?isStuck\@NavigationComponent\@\@QEBA_NH\@Z
     */
    MCAPI bool isStuck(int) const;
    /**
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@V?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob &, std::unique_ptr<class Path>, float);
    /**
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEAVActor\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob &, class Actor &, float);
    /**
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEBVVec3\@\@M1\@Z
     */
    MCAPI bool moveTo(class Mob &, class Vec3 const &, float, class Vec3 const &);
    /**
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob &, class Vec3 const &, float);
    /**
     * @symbol  ??4NavigationComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NavigationComponent & operator=(class NavigationComponent &&);
    /**
     * @symbol  ?resetPath\@NavigationComponent\@\@QEAAXXZ
     */
    MCAPI void resetPath();
    /**
     * @symbol  ?setAvoidDamageBlocks\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidDamageBlocks(bool);
    /**
     * @symbol  ?setAvoidPortals\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidPortals(bool);
    /**
     * @symbol  ?setAvoidSun\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidSun(bool);
    /**
     * @symbol  ?setAvoidWater\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidWater(bool);
    /**
     * @symbol  ?setCanFloat\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanFloat(bool);
    /**
     * @symbol  ?setCanJump\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanJump(bool);
    /**
     * @symbol  ?setCanOpenDoors\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanOpenDoors(bool);
    /**
     * @symbol  ?setCanPassDoors\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanPassDoors(bool);
    /**
     * @symbol  ?setCanSink\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanSink(bool);
    /**
     * @symbol  ?setEndPathRadius\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setEndPathRadius(float);
    /**
     * @symbol  ?setHasDestination\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDestination(bool);
    /**
     * @symbol  ?setHasEndPathRadius\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasEndPathRadius(bool);
    /**
     * @symbol  ?setInternalType\@NavigationComponent\@\@QEAAXV?$unique_ptr\@VPathNavigation\@\@U?$default_delete\@VPathNavigation\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class PathNavigation>);
    /**
     * @symbol  ?setIsFollowingRivers\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsFollowingRivers(bool);
    /**
     * @symbol  ?setPath\@NavigationComponent\@\@QEAAXV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setPath(std::unique_ptr<class Path>);
    /**
     * @symbol  ?setSpeed\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSpeed(float);
    /**
     * @symbol  ?setTargetOffset\@NavigationComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setTargetOffset(class Vec3 const &);
    /**
     * @symbol  ?setTerminationThreshold\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setTerminationThreshold(float);
    /**
     * @symbol  ?stop\@NavigationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void stop(class Mob &);
    /**
     * @symbol  ?travel\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEAM11\@Z
     */
    MCAPI bool travel(class Mob &, float &, float &, float &);
    /**
     * @symbol  ?update\@NavigationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);
    /**
     * @symbol  ?updateLastStuckCheck\@NavigationComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void updateLastStuckCheck(class Mob const &);
    /**
     * @symbol  ??1NavigationComponent\@\@QEAA\@XZ
     */
    MCAPI ~NavigationComponent();

};