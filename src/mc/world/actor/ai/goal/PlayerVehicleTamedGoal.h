#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerVehicleTamedGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERVEHICLETAMEDGOAL
public:
    PlayerVehicleTamedGoal& operator=(PlayerVehicleTamedGoal const&) = delete;
    PlayerVehicleTamedGoal(PlayerVehicleTamedGoal const&)            = delete;
    PlayerVehicleTamedGoal()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PlayerVehicleTamedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERVEHICLETAMEDGOAL
    /**
     * @symbol ?canContinueToUse\@PlayerVehicleTamedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse\@PlayerVehicleTamedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
    /**
     * @symbol ?start\@PlayerVehicleTamedGoal\@\@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @symbol ?tick\@PlayerVehicleTamedGoal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol ??0PlayerVehicleTamedGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayerVehicleTamedGoal(class Mob&);
};
