#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class NearestAttackableTargetGoal : public ::TargetGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETGOAL
public:
    NearestAttackableTargetGoal& operator=(NearestAttackableTargetGoal const&) = delete;
    NearestAttackableTargetGoal(NearestAttackableTargetGoal const&)            = delete;
    NearestAttackableTargetGoal()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@NearestAttackableTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@NearestAttackableTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 11
     * @symbol ?_findTarget\@NearestAttackableTargetGoal\@\@MEAA?AUActorUniqueID\@\@PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const**);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTATTACKABLETARGETGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NearestAttackableTargetGoal();
#endif
    /**
     * @symbol ??0NearestAttackableTargetGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI NearestAttackableTargetGoal(class Mob&);

    // protected:
    /**
     * @symbol ?_canStartSearching\@NearestAttackableTargetGoal\@\@IEAA_NXZ
     */
    MCAPI bool _canStartSearching();
    /**
     * @symbol ?_isTargetVisible\@NearestAttackableTargetGoal\@\@IEBA_NAEBVMob\@\@MM\@Z
     */
    MCAPI bool _isTargetVisible(class Mob const&, float, float) const;

    // private:
    /**
     * @symbol ?_selectTarget\@NearestAttackableTargetGoal\@\@AEAA_NXZ
     */
    MCAPI bool _selectTarget();

protected:
private:
};
