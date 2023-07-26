#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {

public:
    // prevent constructor by default
    OnFireComponent& operator=(OnFireComponent const&) = delete;
    OnFireComponent(OnFireComponent const&)            = delete;
    OnFireComponent()                                  = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@OnFireComponent\@\@QEBAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@OnFireComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertFromLegacyData\@OnFireComponent\@\@SAXAEBVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const&, class CompoundTag&); // NOLINT
    /**
     * @symbol ?needsLegacyConversion\@OnFireComponent\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const&); // NOLINT

    // private:
};
