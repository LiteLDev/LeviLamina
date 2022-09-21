/**
 * @file  MC/ScaredGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScaredGoal.
 *
 */
class ScaredGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAREDGOAL
public:
    class ScaredGoal& operator=(class ScaredGoal const &) = delete;
    ScaredGoal(class ScaredGoal const &) = delete;
    ScaredGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScaredGoal();
    /**
     * @hash   -1951803075
     * @vftbl  1
     * @symbol ?canUse@ScaredGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1478933205
     * @vftbl  2
     * @symbol ?canContinueToUse@ScaredGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1009510090
     * @vftbl  4
     * @symbol ?start@ScaredGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -695467802
     * @vftbl  5
     * @symbol ?stop@ScaredGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1214859103
     * @vftbl  6
     * @symbol ?tick@ScaredGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   53117763
     * @vftbl  7
     * @symbol ?appendDebugInfo@ScaredGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1885846297
     * @symbol ??0ScaredGoal@@QEAA@AEAVMob@@H@Z
     */
    MCAPI ScaredGoal(class Mob &, int);

};