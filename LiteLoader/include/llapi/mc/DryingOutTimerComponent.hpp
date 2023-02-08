/**
 * @file  DryingOutTimerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DryingOutTimerComponent.
 *
 */
class DryingOutTimerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRYINGOUTTIMERCOMPONENT
public:
    class DryingOutTimerComponent& operator=(class DryingOutTimerComponent const &) = delete;
    DryingOutTimerComponent(class DryingOutTimerComponent const &) = delete;
    DryingOutTimerComponent() = delete;
#endif

public:
    /**
     * @hash   1756174103
     * @symbol  ??0DryingOutTimerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DryingOutTimerComponent(class DryingOutTimerComponent &&);
    /**
     * @hash   -1934937624
     * @symbol  ?addAdditionalSaveData\@DryingOutTimerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1747959374
     * @symbol  ?canBeAffectedByWaterBottle\@DryingOutTimerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canBeAffectedByWaterBottle() const;
    /**
     * @hash   1015149122
     * @symbol  ??4DryingOutTimerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DryingOutTimerComponent & operator=(class DryingOutTimerComponent &&);
    /**
     * @hash   -280905490
     * @symbol  ?readAdditionalSaveData\@DryingOutTimerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?refillTimeWithWaterBottle\@DryingOutTimerComponent\@\@QEAAXXZ
     */
    MCAPI void refillTimeWithWaterBottle();
    /**
     * @hash   -1626745269
     * @symbol  ??1DryingOutTimerComponent\@\@QEAA\@XZ
     */
    MCAPI ~DryingOutTimerComponent();

};