/**
 * @file  VexCopyOwnerTargetGoal.hpp
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
 * @brief MC class VexCopyOwnerTargetGoal.
 *
 */
class VexCopyOwnerTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEXCOPYOWNERTARGETGOAL
public:
    class VexCopyOwnerTargetGoal& operator=(class VexCopyOwnerTargetGoal const &) = delete;
    VexCopyOwnerTargetGoal(class VexCopyOwnerTargetGoal const &) = delete;
    VexCopyOwnerTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VexCopyOwnerTargetGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@VexCopyOwnerTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  4
     * @symbol  ?start\@VexCopyOwnerTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@VexCopyOwnerTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol  ??0VexCopyOwnerTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VexCopyOwnerTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);

};