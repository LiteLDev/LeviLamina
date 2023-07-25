#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HideComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDECOMPONENT
public:
    HideComponent& operator=(HideComponent const&) = delete;
    HideComponent(HideComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0HideComponent\@\@QEAA\@XZ
     */
    MCAPI HideComponent();
    /**
     * @symbol ?addAdditionalSaveData\@HideComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?initFromDefinition\@HideComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?isInRaid\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInRaid();
    /**
     * @symbol ?isReactingToBell\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isReactingToBell();
    /**
     * @symbol ?readAdditionalSaveData\@HideComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setInRaid\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setInRaid();
    /**
     * @symbol ?setNotHiding\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setNotHiding();
    /**
     * @symbol ?setReactingToBell\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setReactingToBell();
};
