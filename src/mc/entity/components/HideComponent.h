#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HideComponent {

public:
    // prevent constructor by default
    HideComponent& operator=(HideComponent const&) = delete;
    HideComponent(HideComponent const&)            = delete;

public:
    /**
     * @symbol ??0HideComponent\@\@QEAA\@XZ
     */
    MCAPI HideComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@HideComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@HideComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?isInRaid\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isInRaid(); // NOLINT
    /**
     * @symbol ?isReactingToBell\@HideComponent\@\@QEAA_NXZ
     */
    MCAPI bool isReactingToBell(); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@HideComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setInRaid\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setInRaid(); // NOLINT
    /**
     * @symbol ?setNotHiding\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setNotHiding(); // NOLINT
    /**
     * @symbol ?setReactingToBell\@HideComponent\@\@QEAAXXZ
     */
    MCAPI void setReactingToBell(); // NOLINT
};
