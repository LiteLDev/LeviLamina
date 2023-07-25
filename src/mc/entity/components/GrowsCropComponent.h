#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GrowsCropComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWSCROPCOMPONENT
public:
    GrowsCropComponent& operator=(GrowsCropComponent const&) = delete;
    GrowsCropComponent(GrowsCropComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0GrowsCropComponent\@\@QEAA\@XZ
     */
    MCAPI GrowsCropComponent();
    /**
     * @symbol ?addAdditionalSaveData\@GrowsCropComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol
     * ?readAdditionalSaveData\@GrowsCropComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
};
