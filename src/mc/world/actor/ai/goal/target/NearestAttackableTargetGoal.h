#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class NearestAttackableTargetGoal : public ::TargetGoal {

public:
    // prevent constructor by default
    NearestAttackableTargetGoal& operator=(NearestAttackableTargetGoal const&) = delete;
    NearestAttackableTargetGoal(NearestAttackableTargetGoal const&)            = delete;
    NearestAttackableTargetGoal()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@NearestAttackableTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@NearestAttackableTargetGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@NearestAttackableTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?_findTarget\@NearestAttackableTargetGoal\@\@MEAA?AUActorUniqueID\@\@PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const**); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTATTACKABLETARGETGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NearestAttackableTargetGoal(); // NOLINT
#endif
    /**
     * @symbol ??0NearestAttackableTargetGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI NearestAttackableTargetGoal(class Mob&); // NOLINT

    // protected:
    /**
     * @symbol ?_canStartSearching\@NearestAttackableTargetGoal\@\@IEAA_NXZ
     */
    MCAPI bool _canStartSearching(); // NOLINT
    /**
     * @symbol ?_isTargetVisible\@NearestAttackableTargetGoal\@\@IEBA_NAEBVMob\@\@MM\@Z
     */
    MCAPI bool _isTargetVisible(class Mob const&, float, float) const; // NOLINT

    // private:
    /**
     * @symbol ?_selectTarget\@NearestAttackableTargetGoal\@\@AEAA_NXZ
     */
    MCAPI bool _selectTarget(); // NOLINT

protected:
private:
};
