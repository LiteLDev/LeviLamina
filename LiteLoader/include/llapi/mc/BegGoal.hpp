/**
 * @file  BegGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BegGoal.
 *
 */
class BegGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEGGOAL
public:
    class BegGoal& operator=(class BegGoal const &) = delete;
    BegGoal(class BegGoal const &) = delete;
    BegGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BegGoal();
    /**
     * @hash   -1638786599
     * @vftbl  1
     * @symbol ?canUse@BegGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -974085865
     * @vftbl  2
     * @symbol ?canContinueToUse@BegGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1627781310
     * @vftbl  4
     * @symbol ?start@BegGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -55497822
     * @vftbl  5
     * @symbol ?stop@BegGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1009674323
     * @vftbl  6
     * @symbol ?tick@BegGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1541295765
     * @vftbl  7
     * @symbol ?appendDebugInfo@BegGoal@@EEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1181434274
     * @symbol ??0BegGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MHH@Z
     */
    MCAPI BegGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, int, int);

//private:
    /**
     * @hash   -697616509
     * @symbol ?_playerHoldingInteresting@BegGoal@@AEAA_NPEAVPlayer@@@Z
     */
    MCAPI bool _playerHoldingInteresting(class Player *);

private:

};