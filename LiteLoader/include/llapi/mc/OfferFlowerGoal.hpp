/**
 * @file  OfferFlowerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~OfferFlowerGoal();
    /**
     * @hash   1757074742
     * @vftbl  1
     * @symbol  ?canUse\@OfferFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1797092172
     * @vftbl  2
     * @symbol  ?canContinueToUse\@OfferFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2043940769
     * @vftbl  4
     * @symbol  ?start\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1154604913
     * @vftbl  5
     * @symbol  ?stop\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1315781078
     * @vftbl  6
     * @symbol  ?tick\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   267025850
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@OfferFlowerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   950956403
     * @symbol  ??0OfferFlowerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI OfferFlowerGoal(class Mob &);
    /**
     * @hash   581777240
     * @symbol  ?getMaxOfferFlowerDurationTicks\@OfferFlowerGoal\@\@QEBAHXZ
     */
    MCAPI int getMaxOfferFlowerDurationTicks() const;

};