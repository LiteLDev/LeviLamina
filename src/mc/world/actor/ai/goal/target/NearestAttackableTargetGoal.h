#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class NearestAttackableTargetGoal : public ::TargetGoal {

public:
    // prevent constructor by default
    NearestAttackableTargetGoal& operator=(NearestAttackableTargetGoal const&) = delete;
    NearestAttackableTargetGoal(NearestAttackableTargetGoal const&)            = delete;
    NearestAttackableTargetGoal()                                              = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_canStartSearching\@NearestAttackableTargetGoal\@\@IEAA_NXZ
     */
    MCAPI bool _canStartSearching();
    /**
     * @symbol ?_isTargetVisible\@NearestAttackableTargetGoal\@\@IEBA_NAEBVMob\@\@MM\@Z
     */
    MCAPI bool _isTargetVisible(class Mob const&, float, float) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_selectTarget\@NearestAttackableTargetGoal\@\@AEAA_NXZ
     */
    MCAPI bool _selectTarget();
    // NOLINTEND
};
