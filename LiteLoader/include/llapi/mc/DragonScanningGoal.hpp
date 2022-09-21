/**
 * @file  MC/DragonScanningGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~DragonScanningGoal();
    /**
     * @hash   -1745690103
     * @vftbl  1
     * @symbol ?canUse@DragonScanningGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   531455159
     * @vftbl  2
     * @symbol ?canContinueToUse@DragonScanningGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   59902114
     * @vftbl  4
     * @symbol ?start@DragonScanningGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1315335266
     * @vftbl  5
     * @symbol ?stop@DragonScanningGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -861435891
     * @vftbl  6
     * @symbol ?tick@DragonScanningGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1242137431
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonScanningGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1794420704
     * @symbol ??0DragonScanningGoal@@QEAA@AEAVEnderDragon@@@Z
     */
    MCAPI DragonScanningGoal(class EnderDragon &);

//private:

private:
    /**
     * @hash   269801978
     * @symbol ?SITTING_ATTACK_VIEW_RANGE@DragonScanningGoal@@0MA
     */
    MCAPI static float SITTING_ATTACK_VIEW_RANGE;
    /**
     * @hash   -1646636654
     * @symbol ?SITTING_CHARGE_VIEW_RANGE@DragonScanningGoal@@0MA
     */
    MCAPI static float SITTING_CHARGE_VIEW_RANGE;
    /**
     * @hash   473225442
     * @symbol ?SITTING_SCANNING_IDLE_TICKS@DragonScanningGoal@@0HA
     */
    MCAPI static int SITTING_SCANNING_IDLE_TICKS;

};