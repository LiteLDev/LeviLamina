/**
 * @file  DragonScanningGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonScanningGoal.
 *
 */
class DragonScanningGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSCANNINGGOAL
public:
    class DragonScanningGoal& operator=(class DragonScanningGoal const &) = delete;
    DragonScanningGoal(class DragonScanningGoal const &) = delete;
    DragonScanningGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonScanningGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@DragonScanningGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DragonScanningGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DragonScanningGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0DragonScanningGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonScanningGoal(class EnderDragon &);

//private:

private:
    /**
     * @symbol  ?SITTING_ATTACK_VIEW_RANGE\@DragonScanningGoal\@\@0MA
     */
    MCAPI static float SITTING_ATTACK_VIEW_RANGE;
    /**
     * @symbol  ?SITTING_CHARGE_VIEW_RANGE\@DragonScanningGoal\@\@0MA
     */
    MCAPI static float SITTING_CHARGE_VIEW_RANGE;
    /**
     * @symbol  ?SITTING_SCANNING_IDLE_TICKS\@DragonScanningGoal\@\@0HA
     */
    MCAPI static int SITTING_SCANNING_IDLE_TICKS;

};