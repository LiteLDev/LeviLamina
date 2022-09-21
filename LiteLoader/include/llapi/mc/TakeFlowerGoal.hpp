/**
 * @file  MC/TakeFlowerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TakeFlowerGoal.
 *
 */
class TakeFlowerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEFLOWERGOAL
public:
    class TakeFlowerGoal& operator=(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TakeFlowerGoal();
    /**
     * @hash   -1357468757
     * @vftbl  1
     * @symbol ?canUse@TakeFlowerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1299812423
     * @vftbl  2
     * @symbol ?canContinueToUse@TakeFlowerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1419434876
     * @vftbl  4
     * @symbol ?start@TakeFlowerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -164372380
     * @vftbl  5
     * @symbol ?stop@TakeFlowerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -370253761
     * @vftbl  6
     * @symbol ?tick@TakeFlowerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2126953771
     * @vftbl  7
     * @symbol ?appendDebugInfo@TakeFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   874913976
     * @symbol ??0TakeFlowerGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI TakeFlowerGoal(class Mob &);

};