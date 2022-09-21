/**
 * @file  MC/ReceiveLoveGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ReceiveLoveGoal.
 *
 */
class ReceiveLoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECEIVELOVEGOAL
public:
    class ReceiveLoveGoal& operator=(class ReceiveLoveGoal const &) = delete;
    ReceiveLoveGoal(class ReceiveLoveGoal const &) = delete;
    ReceiveLoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ReceiveLoveGoal();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1904862820
     * @vftbl  6
     * @symbol ?tick@ReceiveLoveGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   789408216
     * @vftbl  7
     * @symbol ?appendDebugInfo@ReceiveLoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECEIVELOVEGOAL
    /**
     * @hash   1654739798
     * @symbol ?canContinueToUse@ReceiveLoveGoal@@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @hash   913847160
     * @symbol ?canUse@ReceiveLoveGoal@@UEAA_NXZ
     */
    MCVAPI bool canUse();
#endif
    /**
     * @hash   1504820317
     * @symbol ??0ReceiveLoveGoal@@QEAA@AEAVVillagerBase@@@Z
     */
    MCAPI ReceiveLoveGoal(class VillagerBase &);

};