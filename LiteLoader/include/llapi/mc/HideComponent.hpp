/**
 * @file  MC/HideComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HideComponent.
 *
 */
class HideComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDECOMPONENT
public:
    class HideComponent& operator=(class HideComponent const &) = delete;
    HideComponent(class HideComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1919666329
     * @symbol ??0HideComponent@@QEAA@XZ
     */
    MCAPI HideComponent();
    /**
     * @hash   -1508127624
     * @symbol ?addAdditionalSaveData@HideComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -794867934
     * @symbol ?initFromDefinition@HideComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   148272794
     * @symbol ?isInRaid@HideComponent@@QEAA_NXZ
     */
    MCAPI bool isInRaid();
    /**
     * @hash   -1959550342
     * @symbol ?isReactingToBell@HideComponent@@QEAA_NXZ
     */
    MCAPI bool isReactingToBell();
    /**
     * @hash   -2124582075
     * @symbol ?readAdditionalSaveData@HideComponent@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   831303495
     * @symbol ?setInRaid@HideComponent@@QEAAXXZ
     */
    MCAPI void setInRaid();
    /**
     * @hash   898346291
     * @symbol ?setNotHiding@HideComponent@@QEAAXXZ
     */
    MCAPI void setNotHiding();
    /**
     * @hash   1933992651
     * @symbol ?setReactingToBell@HideComponent@@QEAAXXZ
     */
    MCAPI void setReactingToBell();

};