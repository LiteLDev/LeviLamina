/**
 * @file  PlayerVehicleTamedGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerVehicleTamedGoal.
 *
 */
class PlayerVehicleTamedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERVEHICLETAMEDGOAL
public:
    class PlayerVehicleTamedGoal& operator=(class PlayerVehicleTamedGoal const &) = delete;
    PlayerVehicleTamedGoal(class PlayerVehicleTamedGoal const &) = delete;
    PlayerVehicleTamedGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerVehicleTamedGoal();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   1456569287
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PlayerVehicleTamedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERVEHICLETAMEDGOAL
    /**
     * @hash   -170688761
     * @symbol  ?canContinueToUse\@PlayerVehicleTamedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @hash   1421004457
     * @symbol  ?canUse\@PlayerVehicleTamedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
    /**
     * @hash   1801037314
     * @symbol  ?start\@PlayerVehicleTamedGoal\@\@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @hash   -624789283
     * @symbol  ?tick\@PlayerVehicleTamedGoal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @hash   124912614
     * @symbol  ??0PlayerVehicleTamedGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayerVehicleTamedGoal(class Mob &);

};