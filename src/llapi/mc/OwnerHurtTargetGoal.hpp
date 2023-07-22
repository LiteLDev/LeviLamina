/**
 * @file  OwnerHurtTargetGoal.hpp
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
 * @brief MC class OwnerHurtTargetGoal.
 *
 */
class OwnerHurtTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTTARGETGOAL
public:
    class OwnerHurtTargetGoal& operator=(class OwnerHurtTargetGoal const &) = delete;
    OwnerHurtTargetGoal(class OwnerHurtTargetGoal const &) = delete;
    OwnerHurtTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OwnerHurtTargetGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@OwnerHurtTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  4
     * @symbol  ?start\@OwnerHurtTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
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
     * @symbol  ??0OwnerHurtTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OwnerHurtTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);

};