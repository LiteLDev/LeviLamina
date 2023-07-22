/**
 * @file  WitherTargetHighestDamage.hpp
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
 * @brief MC class WitherTargetHighestDamage.
 *
 */
class WitherTargetHighestDamage : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERTARGETHIGHESTDAMAGE
public:
    class WitherTargetHighestDamage& operator=(class WitherTargetHighestDamage const &) = delete;
    WitherTargetHighestDamage(class WitherTargetHighestDamage const &) = delete;
    WitherTargetHighestDamage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WitherTargetHighestDamage();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@WitherTargetHighestDamage\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@WitherTargetHighestDamage\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  4
     * @symbol  ?start\@WitherTargetHighestDamage\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@WitherTargetHighestDamage\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl  10
     * @symbol  ?_canAttack\@WitherTargetHighestDamage\@\@EEAA_NPEAVMob\@\@PEAVActor\@\@_N2PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual bool _canAttack(class Mob *, class Actor *, bool, bool, struct MobDescriptor const **);
    /**
     * @symbol  ??0WitherTargetHighestDamage\@\@QEAA\@AEAVWitherBoss\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI WitherTargetHighestDamage(class WitherBoss &, std::vector<struct MobDescriptor> const &);

//private:
    /**
     * @symbol  ?getHighestDamageTarget\@WitherTargetHighestDamage\@\@AEAAPEAVPlayer\@\@XZ
     */
    MCAPI class Player * getHighestDamageTarget();

private:

};