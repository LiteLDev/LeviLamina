/**
 * @file  GrowsCropComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GrowsCropComponent.
 *
 */
class GrowsCropComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWSCROPCOMPONENT
public:
    class GrowsCropComponent& operator=(class GrowsCropComponent const &) = delete;
    GrowsCropComponent(class GrowsCropComponent const &) = delete;
#endif

public:
    /**
     * @hash   -579764855
     * @symbol ??0GrowsCropComponent@@QEAA@XZ
     */
    MCAPI GrowsCropComponent();
    /**
     * @hash   2140875956
     * @symbol ?readAdditionalSaveData@GrowsCropComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

};