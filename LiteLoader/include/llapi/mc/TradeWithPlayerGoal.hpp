/**
 * @file  TradeWithPlayerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TradeWithPlayerGoal.
 *
 */
class TradeWithPlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEWITHPLAYERGOAL
public:
    class TradeWithPlayerGoal& operator=(class TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal(class TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TradeWithPlayerGoal();
    /**
     * @hash   684120226
     * @vftbl  1
     * @symbol ?canUse@TradeWithPlayerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1520102448
     * @vftbl  2
     * @symbol ?canContinueToUse@TradeWithPlayerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1372334539
     * @vftbl  4
     * @symbol ?start@TradeWithPlayerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   186683659
     * @vftbl  5
     * @symbol ?stop@TradeWithPlayerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1307756930
     * @vftbl  7
     * @symbol ?appendDebugInfo@TradeWithPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1434500881
     * @symbol ??0TradeWithPlayerGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI TradeWithPlayerGoal(class Mob &);

};