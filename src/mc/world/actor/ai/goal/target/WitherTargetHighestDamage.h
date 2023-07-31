#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class WitherTargetHighestDamage : public ::TargetGoal {

public:
    // prevent constructor by default
    WitherTargetHighestDamage& operator=(WitherTargetHighestDamage const&) = delete;
    WitherTargetHighestDamage(WitherTargetHighestDamage const&)            = delete;
    WitherTargetHighestDamage()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@WitherTargetHighestDamage\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@WitherTargetHighestDamage\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@WitherTargetHighestDamage\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@WitherTargetHighestDamage\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol ?_canAttack\@WitherTargetHighestDamage\@\@EEAA_NPEAVMob\@\@PEAVActor\@\@_N2PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual bool _canAttack(class Mob*, class Actor*, bool, bool, struct MobDescriptor const**);
    /**
     * @symbol
     * ??0WitherTargetHighestDamage\@\@QEAA\@AEAVWitherBoss\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI WitherTargetHighestDamage(class WitherBoss&, std::vector<struct MobDescriptor> const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?getHighestDamageTarget\@WitherTargetHighestDamage\@\@AEAAPEAVPlayer\@\@XZ
     */
    MCAPI class Player* getHighestDamageTarget();
    // NOLINTEND
};
