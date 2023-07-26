#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GrowsCropComponent {

public:
    // prevent constructor by default
    GrowsCropComponent& operator=(GrowsCropComponent const&) = delete;
    GrowsCropComponent(GrowsCropComponent const&)            = delete;

public:
    /**
     * @symbol ??0GrowsCropComponent\@\@QEAA\@XZ
     */
    MCAPI GrowsCropComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@GrowsCropComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@GrowsCropComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
};
