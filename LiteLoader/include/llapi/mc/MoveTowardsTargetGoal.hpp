/**
 * @file  MoveTowardsTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsTargetGoal.
 *
 */
class MoveTowardsTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSTARGETGOAL
public:
    class MoveTowardsTargetGoal& operator=(class MoveTowardsTargetGoal const &) = delete;
    MoveTowardsTargetGoal(class MoveTowardsTargetGoal const &) = delete;
    MoveTowardsTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveTowardsTargetGoal();
    /**
     * @hash   155748097
     * @vftbl  1
     * @symbol ?canUse@MoveTowardsTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1246461503
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveTowardsTargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   562906058
     * @vftbl  4
     * @symbol ?start@MoveTowardsTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1452144662
     * @vftbl  5
     * @symbol ?stop@MoveTowardsTargetGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   658985231
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveTowardsTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   278905886
     * @symbol ??0MoveTowardsTargetGoal@@QEAA@AEAVMob@@MM@Z
     */
    MCAPI MoveTowardsTargetGoal(class Mob &, float, float);

};