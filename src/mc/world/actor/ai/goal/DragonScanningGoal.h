#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonScanningGoal : public ::Goal {

public:
    // prevent constructor by default
    DragonScanningGoal& operator=(DragonScanningGoal const&) = delete;
    DragonScanningGoal(DragonScanningGoal const&)            = delete;
    DragonScanningGoal()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonScanningGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonScanningGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonScanningGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DragonScanningGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonScanningGoal(class EnderDragon&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?SITTING_ATTACK_VIEW_RANGE\@DragonScanningGoal\@\@0MA
     */
    MCAPI static float SITTING_ATTACK_VIEW_RANGE;
    /**
     * @symbol ?SITTING_CHARGE_VIEW_RANGE\@DragonScanningGoal\@\@0MA
     */
    MCAPI static float SITTING_CHARGE_VIEW_RANGE;
    /**
     * @symbol ?SITTING_SCANNING_IDLE_TICKS\@DragonScanningGoal\@\@0HA
     */
    MCAPI static int SITTING_SCANNING_IDLE_TICKS;
    // NOLINTEND
};
