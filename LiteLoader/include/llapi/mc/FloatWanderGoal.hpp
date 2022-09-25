/**
 * @file  FloatWanderGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FloatWanderGoal.
 *
 */
class FloatWanderGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATWANDERGOAL
public:
    class FloatWanderGoal& operator=(class FloatWanderGoal const &) = delete;
    FloatWanderGoal(class FloatWanderGoal const &) = delete;
    FloatWanderGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FloatWanderGoal();
    /**
     * @hash   1828895476
     * @vftbl  1
     * @symbol ?canUse@FloatWanderGoal@@UEAA_NXZ
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
     * @hash   -813645048
     * @vftbl  6
     * @symbol ?tick@FloatWanderGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   2016409244
     * @vftbl  7
     * @symbol ?appendDebugInfo@FloatWanderGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1423858459
     * @symbol ??0FloatWanderGoal@@QEAA@AEAVMob@@MMM_N1UFloatRange@@@Z
     */
    MCAPI FloatWanderGoal(class Mob &, float, float, float, bool, bool, struct FloatRange);

//private:
    /**
     * @hash   803254388
     * @symbol ?_canReach@FloatWanderGoal@@AEAA_NAEBVVec3@@M@Z
     */
    MCAPI bool _canReach(class Vec3 const &, float);

private:

};