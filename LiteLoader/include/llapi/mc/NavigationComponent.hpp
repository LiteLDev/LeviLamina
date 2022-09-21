/**
 * @file  MC/NavigationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1392891653
     * @symbol ??0NavigationComponent@@QEAA@XZ
     */
    MCAPI NavigationComponent();
    /**
     * @hash   -2003747727
     * @symbol ??0NavigationComponent@@QEAA@AEBV0@@Z
     */
    MCAPI NavigationComponent(class NavigationComponent const &);
    /**
     * @hash   -2147135396
     * @symbol ?createPath@NavigationComponent@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVMob@@AEAVActor@@@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob &, class Actor &);
    /**
     * @hash   -662723824
     * @symbol ?createPath@NavigationComponent@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVMob@@AEBVVec3@@@Z
     */
    MCAPI std::unique_ptr<class Path> createPath(class Mob &, class Vec3 const &);
    /**
     * @hash   494230270
     * @symbol ?getAvoidDamageBlocks@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getAvoidDamageBlocks() const;
    /**
     * @hash   -765311812
     * @symbol ?getAvoidPortals@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getAvoidPortals() const;
    /**
     * @hash   291703660
     * @symbol ?getAvoidSun@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getAvoidSun() const;
    /**
     * @hash   1964145996
     * @symbol ?getAvoidWater@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getAvoidWater() const;
    /**
     * @hash   -488948446
     * @symbol ?getBlocksToAvoid@NavigationComponent@@QEBAAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
     */
    MCAPI std::vector<class BlockDescriptor> const & getBlocksToAvoid() const;
    /**
     * @hash   772920734
     * @symbol ?getCanBreach@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanBreach() const;
    /**
     * @hash   2000672364
     * @symbol ?getCanFloat@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanFloat() const;
    /**
     * @hash   -1682853922
     * @symbol ?getCanJump@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanJump() const;
    /**
     * @hash   1721465884
     * @symbol ?getCanOpenDoors@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanOpenDoors() const;
    /**
     * @hash   -1938106068
     * @symbol ?getCanOpenIronDoors@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanOpenIronDoors() const;
    /**
     * @hash   -733301732
     * @symbol ?getCanPassDoors@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanPassDoors() const;
    /**
     * @hash   -965892050
     * @symbol ?getCanPathOverLava@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanPathOverLava() const;
    /**
     * @hash   1511625630
     * @symbol ?getCanSink@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanSink() const;
    /**
     * @hash   -1749143714
     * @symbol ?getCanWalkInLava@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getCanWalkInLava() const;
    /**
     * @hash   2080046454
     * @symbol ?getEndPathRadiusSqr@NavigationComponent@@QEBAMXZ
     */
    MCAPI float getEndPathRadiusSqr() const;
    /**
     * @hash   2091227628
     * @symbol ?getHasDestination@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getHasDestination() const;
    /**
     * @hash   176196684
     * @symbol ?getHasEndPathRadius@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getHasEndPathRadius() const;
    /**
     * @hash   -1022060948
     * @symbol ?getIsAmphibious@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getIsAmphibious() const;
    /**
     * @hash   104715518
     * @symbol ?getIsFollowingRivers@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool getIsFollowingRivers() const;
    /**
     * @hash   -682109164
     * @symbol ?getLastStuckCheckPosition@NavigationComponent@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getLastStuckCheckPosition() const;
    /**
     * @hash   1030872799
     * @symbol ?getMaxDistance@NavigationComponent@@QEBAMAEBVActor@@@Z
     */
    MCAPI float getMaxDistance(class Actor const &) const;
    /**
     * @hash   -1977295061
     * @symbol ?getPath@NavigationComponent@@QEBAPEAVPath@@XZ
     */
    MCAPI class Path * getPath() const;
    /**
     * @hash   -1365468970
     * @symbol ?getSpeed@NavigationComponent@@QEBAMXZ
     */
    MCAPI float getSpeed() const;
    /**
     * @hash   810674266
     * @symbol ?getTargetOffset@NavigationComponent@@QEBAAEBVVec3@@XZ
     */
    MCAPI class Vec3 const & getTargetOffset() const;
    /**
     * @hash   -1596218384
     * @symbol ?getTerminationThreshold@NavigationComponent@@QEBAMXZ
     */
    MCAPI float getTerminationThreshold() const;
    /**
     * @hash   -868959054
     * @symbol ?getTickTimeout@NavigationComponent@@QEBAHXZ
     */
    MCAPI int getTickTimeout() const;
    /**
     * @hash   -744988339
     * @symbol ?incrementTick@NavigationComponent@@QEAAXXZ
     */
    MCAPI void incrementTick();
    /**
     * @hash   964190409
     * @symbol ?initMultiTypeNavigationComponent@NavigationComponent@@QEAAXAEAVMob@@AEAVActorDefinitionDescriptor@@@Z
     */
    MCAPI void initMultiTypeNavigationComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @hash   -953091356
     * @symbol ?initializeFromDefinition@NavigationComponent@@QEAAXAEAVMob@@PEAUNavigationDescription@@@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct NavigationDescription *);
    /**
     * @hash   1496046846
     * @symbol ?isDone@NavigationComponent@@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @hash   -1504806605
     * @symbol ?isFree@NavigationComponent@@QEAA?AW4NodeType@@AEAVMob@@AEBVBlockPos@@11W4CanJumpIntoNode@@@Z
     */
    MCAPI enum NodeType isFree(class Mob &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum CanJumpIntoNode);
    /**
     * @hash   389343117
     * @symbol ?isStuck@NavigationComponent@@QEBA_NH@Z
     */
    MCAPI bool isStuck(int) const;
    /**
     * @hash   -1930106227
     * @symbol ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@AEBVVec3@@M@Z
     */
    MCAPI bool moveTo(class Mob &, class Vec3 const &, float);
    /**
     * @hash   1338413241
     * @symbol ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@V?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@M@Z
     */
    MCAPI bool moveTo(class Mob &, std::unique_ptr<class Path>, float);
    /**
     * @hash   2119061013
     * @symbol ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@AEAVActor@@M@Z
     */
    MCAPI bool moveTo(class Mob &, class Actor &, float);
    /**
     * @hash   1928732488
     * @symbol ?moveTo@NavigationComponent@@QEAA_NAEAVMob@@AEBVVec3@@M1@Z
     */
    MCAPI bool moveTo(class Mob &, class Vec3 const &, float, class Vec3 const &);
    /**
     * @hash   -1798904938
     * @symbol ??4NavigationComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class NavigationComponent & operator=(class NavigationComponent &&);
    /**
     * @hash   -432551731
     * @symbol ?resetPath@NavigationComponent@@QEAAXXZ
     */
    MCAPI void resetPath();
    /**
     * @hash   -1786073634
     * @symbol ?setAvoidDamageBlocks@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setAvoidDamageBlocks(bool);
    /**
     * @hash   -2107233952
     * @symbol ?setAvoidPortals@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setAvoidPortals(bool);
    /**
     * @hash   643435504
     * @symbol ?setAvoidSun@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setAvoidSun(bool);
    /**
     * @hash   2002068816
     * @symbol ?setAvoidWater@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setAvoidWater(bool);
    /**
     * @hash   2080919840
     * @symbol ?setCanFloat@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setCanFloat(bool);
    /**
     * @hash   585792782
     * @symbol ?setCanJump@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setCanJump(bool);
    /**
     * @hash   1958145648
     * @symbol ?setCanOpenDoors@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setCanOpenDoors(bool);
    /**
     * @hash   -877916224
     * @symbol ?setCanPassDoors@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setCanPassDoors(bool);
    /**
     * @hash   -1363379682
     * @symbol ?setCanSink@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setCanSink(bool);
    /**
     * @hash   1016971094
     * @symbol ?setEndPathRadius@NavigationComponent@@QEAAXM@Z
     */
    MCAPI void setEndPathRadius(float);
    /**
     * @hash   1997327776
     * @symbol ?setHasDestination@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setHasDestination(bool);
    /**
     * @hash   -110862352
     * @symbol ?setHasEndPathRadius@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setHasEndPathRadius(bool);
    /**
     * @hash   -268972398
     * @symbol ?setInternalType@NavigationComponent@@QEAAXV?$unique_ptr@VPathNavigation@@U?$default_delete@VPathNavigation@@@std@@@std@@@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class PathNavigation>);
    /**
     * @hash   -753054466
     * @symbol ?setIsFollowingRivers@NavigationComponent@@QEAAX_N@Z
     */
    MCAPI void setIsFollowingRivers(bool);
    /**
     * @hash   232279490
     * @symbol ?setPath@NavigationComponent@@QEAAXV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@@Z
     */
    MCAPI void setPath(std::unique_ptr<class Path>);
    /**
     * @hash   -1887348724
     * @symbol ?setSpeed@NavigationComponent@@QEAAXM@Z
     */
    MCAPI void setSpeed(float);
    /**
     * @hash   1357030174
     * @symbol ?setTargetOffset@NavigationComponent@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setTargetOffset(class Vec3 const &);
    /**
     * @hash   -1559811630
     * @symbol ?setTerminationThreshold@NavigationComponent@@QEAAXM@Z
     */
    MCAPI void setTerminationThreshold(float);
    /**
     * @hash   1868926370
     * @symbol ?stop@NavigationComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void stop(class Mob &);
    /**
     * @hash   -1985850859
     * @symbol ?travel@NavigationComponent@@QEAA_NAEAVMob@@AEAM11@Z
     */
    MCAPI bool travel(class Mob &, float &, float &, float &);
    /**
     * @hash   -1867308364
     * @symbol ?update@NavigationComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void update(class Mob &);
    /**
     * @hash   238937548
     * @symbol ?updateLastStuckCheck@NavigationComponent@@QEAAXAEBVMob@@@Z
     */
    MCAPI void updateLastStuckCheck(class Mob const &);
    /**
     * @hash   1996049125
     * @symbol ??1NavigationComponent@@QEAA@XZ
     */
    MCAPI ~NavigationComponent();

};