/**
 * @file  NavigationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   542275957
     * @symbol  ??0NavigationComponent\@\@QEAA\@XZ
     */
    MCAPI NavigationComponent();
    /**
     * @hash   1440603873
     * @symbol  ??0NavigationComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI NavigationComponent(class NavigationComponent const &);
    /**
     * @hash   1297216204
     * @symbol  ?createPath\@NavigationComponent\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob &, class Actor &);
    /**
     * @hash   -1513324144
     * @symbol  ?createPath\@NavigationComponent\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob &, class Vec3 const &);
    /**
     * @hash   626110222
     * @symbol  ?getAvoidDamageBlocks\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidDamageBlocks() const;
    /**
     * @hash   -633370356
     * @symbol  ?getAvoidPortals\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidPortals() const;
    /**
     * @hash   -558881284
     * @symbol  ?getAvoidSun\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidSun() const;
    /**
     * @hash   1112377100
     * @symbol  ?getAvoidWater\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAvoidWater() const;
    /**
     * @hash   -1341070990
     * @symbol  ?getBlocksToAvoid\@NavigationComponent\@\@QEBAAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockDescriptor> const & getBlocksToAvoid() const;
    /**
     * @hash   -77664210
     * @symbol  ?getCanBreach\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanBreach() const;
    /**
     * @hash   1150087420
     * @symbol  ?getCanFloat\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanFloat() const;
    /**
     * @hash   1761528430
     * @symbol  ?getCanJump\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanJump() const;
    /**
     * @hash   1858389164
     * @symbol  ?getCanOpenDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanOpenDoors() const;
    /**
     * @hash   1506276284
     * @symbol  ?getCanOpenIronDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanOpenIronDoors() const;
    /**
     * @hash   -1583886676
     * @symbol  ?getCanPassDoors\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanPassDoors() const;
    /**
     * @hash   -1816476994
     * @symbol  ?getCanPathOverLava\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanPathOverLava() const;
    /**
     * @hash   658549774
     * @symbol  ?getCanSink\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanSink() const;
    /**
     * @hash   1695238638
     * @symbol  ?getCanWalkInLava\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanWalkInLava() const;
    /**
     * @hash   -1964261290
     * @symbol  ?getEndPathRadiusSqr\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getEndPathRadiusSqr() const;
    /**
     * @hash   -2098660084
     * @symbol  ?getHasDestination\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasDestination() const;
    /**
     * @hash   -674388260
     * @symbol  ?getHasEndPathRadius\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasEndPathRadius() const;
    /**
     * @hash   -1875136804
     * @symbol  ?getIsAmphibious\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsAmphibious() const;
    /**
     * @hash   -745869426
     * @symbol  ?getIsFollowingRivers\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsFollowingRivers() const;
    /**
     * @hash   -1532694108
     * @symbol  ?getLastStuckCheckPosition\@NavigationComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getLastStuckCheckPosition() const;
    /**
     * @hash   180287855
     * @symbol  ?getMaxDistance\@NavigationComponent\@\@QEBAMAEBVActor\@\@\@Z
     */
    MCAPI float getMaxDistance(class Actor const &) const;
    /**
     * @hash   955338667
     * @symbol  ?getPath\@NavigationComponent\@\@QEBAPEAVPath\@\@XZ
     */
    MCAPI class Path * getPath() const;
    /**
     * @hash   2077375782
     * @symbol  ?getSpeed\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getSpeed() const;
    /**
     * @hash   -39895302
     * @symbol  ?getTargetOffset\@NavigationComponent\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getTargetOffset() const;
    /**
     * @hash   1848179344
     * @symbol  ?getTerminationThreshold\@NavigationComponent\@\@QEBAMXZ
     */
    MCAPI float getTerminationThreshold() const;
    /**
     * @hash   -1719528622
     * @symbol  ?getTickTimeout\@NavigationComponent\@\@QEBAHXZ
     */
    MCAPI int getTickTimeout() const;
    /**
     * @hash   -1595557907
     * @symbol  ?incrementTick\@NavigationComponent\@\@QEAAXXZ
     */
    MCAPI void incrementTick();
    /**
     * @hash   113620841
     * @symbol  ?initMultiTypeNavigationComponent\@NavigationComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeNavigationComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @hash   -1804060700
     * @symbol  ?initializeFromDefinition\@NavigationComponent\@\@QEAAXAEAVMob\@\@PEAUNavigationDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct NavigationDescription *);
    /**
     * @hash   645092878
     * @symbol  ?isDone\@NavigationComponent\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   1939206723
     * @symbol  ?isFree\@NavigationComponent\@\@QEAA?AW4NodeType\@\@AEAVMob\@\@AEBVBlockPos\@\@11W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class Mob &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode);
    /**
     * @hash   -461610851
     * @symbol  ?isStuck\@NavigationComponent\@\@QEBA_NH\@Z
     */
    MCAPI bool isStuck(int) const;
    /**
     * @hash   487490025
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@V?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob &, std::unique_ptr<class Path>, float);
    /**
     * @hash   1268107045
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEAVActor\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob &, class Actor &, float);
    /**
     * @hash   1077778520
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEBVVec3\@\@M1\@Z
     */
    MCAPI bool moveTo(class Mob &, class Vec3 const &, float, class Vec3 const &);
    /**
     * @hash   1513937853
     * @symbol  ?moveTo\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI bool moveTo(class Mob &, class Vec3 const &, float);
    /**
     * @hash   -1584701882
     * @symbol  ??4NavigationComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NavigationComponent & operator=(class NavigationComponent &&);
    /**
     * @hash   -1283474947
     * @symbol  ?resetPath\@NavigationComponent\@\@QEAAXXZ
     */
    MCAPI void resetPath();
    /**
     * @hash   -1654193682
     * @symbol  ?setAvoidDamageBlocks\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidDamageBlocks(bool);
    /**
     * @hash   -1975338624
     * @symbol  ?setAvoidPortals\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidPortals(bool);
    /**
     * @hash   -207487712
     * @symbol  ?setAvoidSun\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidSun(bool);
    /**
     * @hash   1150576688
     * @symbol  ?setAvoidWater\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAvoidWater(bool);
    /**
     * @hash   1229996624
     * @symbol  ?setCanFloat\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanFloat(bool);
    /**
     * @hash   -265130434
     * @symbol  ?setCanJump\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanJump(bool);
    /**
     * @hash   2095376448
     * @symbol  ?setCanOpenDoors\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanOpenDoors(bool);
    /**
     * @hash   -1728839440
     * @symbol  ?setCanPassDoors\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanPassDoors(bool);
    /**
     * @hash   2078542510
     * @symbol  ?setCanSink\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setCanSink(bool);
    /**
     * @hash   166047878
     * @symbol  ?setEndPathRadius\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setEndPathRadius(float);
    /**
     * @hash   1146404560
     * @symbol  ?setHasDestination\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDestination(bool);
    /**
     * @hash   -961785568
     * @symbol  ?setHasEndPathRadius\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasEndPathRadius(bool);
    /**
     * @hash   -1119895614
     * @symbol  ?setInternalType\@NavigationComponent\@\@QEAAXV?$unique_ptr\@VPathNavigation\@\@U?$default_delete\@VPathNavigation\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class PathNavigation>);
    /**
     * @hash   -1603962306
     * @symbol  ?setIsFollowingRivers\@NavigationComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsFollowingRivers(bool);
    /**
     * @hash   -618628350
     * @symbol  ?setPath\@NavigationComponent\@\@QEAAXV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setPath(std::unique_ptr<class Path>);
    /**
     * @hash   1556710732
     * @symbol  ?setSpeed\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSpeed(float);
    /**
     * @hash   506122334
     * @symbol  ?setTargetOffset\@NavigationComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setTargetOffset(class Vec3 const &);
    /**
     * @hash   1884247826
     * @symbol  ?setTerminationThreshold\@NavigationComponent\@\@QEAAXM\@Z
     */
    MCAPI void setTerminationThreshold(float);
    /**
     * @hash   1018018530
     * @symbol  ?stop\@NavigationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void stop(class Mob &);
    /**
     * @hash   1458208597
     * @symbol  ?travel\@NavigationComponent\@\@QEAA_NAEAVMob\@\@AEAM11\@Z
     */
    MCAPI bool travel(class Mob &, float &, float &, float &);
    /**
     * @hash   1576766468
     * @symbol  ?update\@NavigationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);
    /**
     * @hash   -611954916
     * @symbol  ?updateLastStuckCheck\@NavigationComponent\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void updateLastStuckCheck(class Mob const &);
    /**
     * @hash   -2084715115
     * @symbol  ??1NavigationComponent\@\@QEAA\@XZ
     */
    MCAPI ~NavigationComponent();

};