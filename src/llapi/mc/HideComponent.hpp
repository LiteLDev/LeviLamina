/**
 * @file  HideComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0HideComponent\@\@QEAA\@XZ
     */
    MCAPI HideComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@HideComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?initFromDefinition\@HideComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?isInRaid\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInRaid();
    /**
     * @symbol  ?isReactingToBell\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isReactingToBell();
    /**
     * @symbol  ?readAdditionalSaveData\@HideComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?setInRaid\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setInRaid();
    /**
     * @symbol  ?setNotHiding\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setNotHiding();
    /**
     * @symbol  ?setReactingToBell\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setReactingToBell();

};