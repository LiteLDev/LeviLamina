/**
 * @file  DryingOutTimerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1538649831
     * @symbol ??0DryingOutTimerComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI DryingOutTimerComponent(class DryingOutTimerComponent &&);
    /**
     * @hash   -1083091848
     * @symbol ?addAdditionalSaveData@DryingOutTimerComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -896144350
     * @symbol ?canBeAffectedByWaterBottle@DryingOutTimerComponent@@QEBA_NXZ
     */
    MCAPI bool canBeAffectedByWaterBottle() const;
    /**
     * @hash   797624850
     * @symbol ??4DryingOutTimerComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class DryingOutTimerComponent & operator=(class DryingOutTimerComponent &&);
    /**
     * @hash   570894158
     * @symbol ?readAdditionalSaveData@DryingOutTimerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1026560600
     * @symbol ?refillTimeWithWaterBottle@DryingOutTimerComponent@@QEAAXUTick@@@Z
     */
    MCAPI void refillTimeWithWaterBottle(struct Tick);
    /**
     * @hash   -1844269541
     * @symbol ??1DryingOutTimerComponent@@QEAA@XZ
     */
    MCAPI ~DryingOutTimerComponent();

};