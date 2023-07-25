#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgeableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLECOMPONENT
public:
    AgeableComponent& operator=(AgeableComponent const&) = delete;
    AgeableComponent(AgeableComponent const&)            = delete;
    AgeableComponent()                                   = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@AgeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getAge\@AgeableComponent\@\@QEBAHXZ
     */
    MCAPI int getAge() const;
    /**
     * @symbol ?getInteraction\@AgeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@AgeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setAge\@AgeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setAge(int);
};
