#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRECOMPONENT
public:
    OnFireComponent& operator=(OnFireComponent const&) = delete;
    OnFireComponent(OnFireComponent const&)            = delete;
    OnFireComponent()                                  = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@OnFireComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const;
    /**
     * @symbol ?readAdditionalSaveData\@OnFireComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&);
    /**
     * @symbol ?convertFromLegacyData\@OnFireComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const&, class CompoundTag&);
    /**
     * @symbol ?needsLegacyConversion\@OnFireComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const&);

    // private:
};
