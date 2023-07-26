#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerVehicleTamedGoal {

public:
    // prevent constructor by default
    PlayerVehicleTamedGoal& operator=(PlayerVehicleTamedGoal const&) = delete;
    PlayerVehicleTamedGoal(PlayerVehicleTamedGoal const&)            = delete;
    PlayerVehicleTamedGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PlayerVehicleTamedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERVEHICLETAMEDGOAL
    /**
     * @symbol ?canContinueToUse\@PlayerVehicleTamedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse(); // NOLINT
    /**
     * @symbol ?canUse\@PlayerVehicleTamedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse(); // NOLINT
    /**
     * @symbol ?start\@PlayerVehicleTamedGoal\@\@UEAAXXZ
     */
    MCVAPI void start(); // NOLINT
    /**
     * @symbol ?tick\@PlayerVehicleTamedGoal\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
#endif
    /**
     * @symbol ??0PlayerVehicleTamedGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayerVehicleTamedGoal(class Mob&); // NOLINT
};
