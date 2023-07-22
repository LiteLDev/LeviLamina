/**
 * @file  OwnerHurtByTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OwnerHurtByTargetGoal.
 *
 */
class OwnerHurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTBYTARGETGOAL
public:
    class OwnerHurtByTargetGoal& operator=(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OwnerHurtByTargetGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@OwnerHurtByTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  4
     * @symbol  ?start\@OwnerHurtByTargetGoal\@\@UEAAXXZ
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
     * @symbol  ??0OwnerHurtByTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OwnerHurtByTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);

};