/**
 * @file  MC/MoveTowardsHomeRestrictionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsHomeRestrictionGoal.
 *
 */
class MoveTowardsHomeRestrictionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSHOMERESTRICTIONGOAL
public:
    class MoveTowardsHomeRestrictionGoal& operator=(class MoveTowardsHomeRestrictionGoal const &) = delete;
    MoveTowardsHomeRestrictionGoal(class MoveTowardsHomeRestrictionGoal const &) = delete;
    MoveTowardsHomeRestrictionGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveTowardsHomeRestrictionGoal();
    /**
     * @hash   -1101552565
     * @vftbl  1
     * @symbol ?canUse@MoveTowardsHomeRestrictionGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   247917925
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveTowardsHomeRestrictionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1865972616
     * @symbol ??0MoveTowardsHomeRestrictionGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MoveTowardsHomeRestrictionGoal(class Mob &);

};