#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgeableComponent {

public:
    // prevent constructor by default
    AgeableComponent& operator=(AgeableComponent const&) = delete;
    AgeableComponent(AgeableComponent const&)            = delete;
    AgeableComponent()                                   = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@AgeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getAge\@AgeableComponent\@\@QEBAHXZ
     */
    MCAPI int getAge() const; // NOLINT
    /**
     * @symbol ?getInteraction\@AgeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@AgeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setAge\@AgeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setAge(int); // NOLINT
};
