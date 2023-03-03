/**
 * @file  HurtByTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HurtByTargetGoal.
 *
 */
class HurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTBYTARGETGOAL
public:
    class HurtByTargetGoal& operator=(class HurtByTargetGoal const &) = delete;
    HurtByTargetGoal(class HurtByTargetGoal const &) = delete;
    HurtByTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HurtByTargetGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@HurtByTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  4
     * @symbol  ?start\@HurtByTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@HurtByTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol  ?alertOther\@HurtByTargetGoal\@\@MEAAXPEAVMob\@\@0\@Z
     */
    virtual void alertOther(class Mob *, class Mob *);
    /**
     * @symbol  ??0HurtByTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI HurtByTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, bool);

};