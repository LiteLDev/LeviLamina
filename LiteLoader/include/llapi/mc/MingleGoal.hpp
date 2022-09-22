/**
 * @file  MingleGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MingleGoal.
 *
 */
class MingleGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINGLEGOAL
public:
    class MingleGoal& operator=(class MingleGoal const &) = delete;
    MingleGoal(class MingleGoal const &) = delete;
    MingleGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MingleGoal();
    /**
     * @hash   729459839
     * @vftbl  1
     * @symbol ?canUse@MingleGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1201929933
     * @vftbl  2
     * @symbol ?canContinueToUse@MingleGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1283751784
     * @vftbl  4
     * @symbol ?start@MingleGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -969632616
     * @vftbl  5
     * @symbol ?stop@MingleGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1488916285
     * @vftbl  6
     * @symbol ?tick@MingleGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -983580255
     * @vftbl  7
     * @symbol ?appendDebugInfo@MingleGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -389330893
     * @symbol ??0MingleGoal@@QEAA@AEAVMob@@MMMUActorDefinitionIdentifier@@M@Z
     */
    MCAPI MingleGoal(class Mob &, float, float, float, struct ActorDefinitionIdentifier, float);

//private:
    /**
     * @hash   2100744346
     * @symbol ?_findNewPartner@MingleGoal@@AEAAXUActorUniqueID@@@Z
     */
    MCAPI void _findNewPartner(struct ActorUniqueID);
    /**
     * @hash   356442830
     * @symbol ?_isWithinInteractRange@MingleGoal@@AEBA_NAEAVActor@@@Z
     */
    MCAPI bool _isWithinInteractRange(class Actor &) const;
    /**
     * @hash   538367303
     * @symbol ?_lookAt@MingleGoal@@AEAAXPEAVActor@@@Z
     */
    MCAPI void _lookAt(class Actor *);

private:
    /**
     * @hash   2058621220
     * @symbol ?FIND_PARTNER_INTERVAL_TICKS@MingleGoal@@0HB
     */
    MCAPI static int const FIND_PARTNER_INTERVAL_TICKS;
    /**
     * @hash   99605889
     * @symbol ?SPEAK_INTERVAL_TICKS_MAX@MingleGoal@@0HB
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MAX;
    /**
     * @hash   -795458005
     * @symbol ?SPEAK_INTERVAL_TICKS_MIN@MingleGoal@@0HB
     */
    MCAPI static int const SPEAK_INTERVAL_TICKS_MIN;

};