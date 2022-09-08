/**
 * @file  SlimeKeepOnJumpingGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimeKeepOnJumpingGoal.
 *
 */
class SlimeKeepOnJumpingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEKEEPONJUMPINGGOAL
public:
    class SlimeKeepOnJumpingGoal& operator=(class SlimeKeepOnJumpingGoal const &) = delete;
    SlimeKeepOnJumpingGoal(class SlimeKeepOnJumpingGoal const &) = delete;
    SlimeKeepOnJumpingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2018912421
     */
    virtual ~SlimeKeepOnJumpingGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SlimeKeepOnJumpingGoal@@UEAA_NXZ
     * @hash   -252130043
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1407555070
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1363424028
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   518983733
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@SlimeKeepOnJumpingGoal@@UEAAXXZ
     * @hash   -1014298903
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SlimeKeepOnJumpingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1340854405
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SlimeKeepOnJumpingGoal@@QEAA@AEAVMob@@@Z
     * @hash   1220222642
     */
    MCAPI SlimeKeepOnJumpingGoal(class Mob &);

};