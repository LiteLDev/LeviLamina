/**
 * @file  OfferFlowerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OfferFlowerGoal.
 *
 */
class OfferFlowerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFERFLOWERGOAL
public:
    class OfferFlowerGoal& operator=(class OfferFlowerGoal const &) = delete;
    OfferFlowerGoal(class OfferFlowerGoal const &) = delete;
    OfferFlowerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OfferFlowerGoal();
    /**
     * @hash   -2006328858
     * @vftbl  1
     * @symbol ?canUse@OfferFlowerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1265482348
     * @vftbl  2
     * @symbol ?canContinueToUse@OfferFlowerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1512899857
     * @vftbl  4
     * @symbol ?start@OfferFlowerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -623610129
     * @vftbl  5
     * @symbol ?stop@OfferFlowerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -784924678
     * @vftbl  6
     * @symbol ?tick@OfferFlowerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   799835002
     * @vftbl  7
     * @symbol ?appendDebugInfo@OfferFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -258928261
     * @symbol ??0OfferFlowerGoal@@QEAA@AEAVIronGolem@@@Z
     */
    MCAPI OfferFlowerGoal(class IronGolem &);

};