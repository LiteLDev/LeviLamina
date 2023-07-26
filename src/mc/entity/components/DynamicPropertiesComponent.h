#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicPropertiesComponent {

public:
    // prevent constructor by default
    DynamicPropertiesComponent& operator=(DynamicPropertiesComponent const&) = delete;
    DynamicPropertiesComponent(DynamicPropertiesComponent const&)            = delete;
    DynamicPropertiesComponent()                                             = delete;

public:
    /**
     * @symbol ??0DynamicPropertiesComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DynamicPropertiesComponent(class DynamicPropertiesComponent&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@DynamicPropertiesComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?getProperties\@DynamicPropertiesComponent\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties& getProperties(); // NOLINT
    /**
     * @symbol ??4DynamicPropertiesComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DynamicPropertiesComponent& operator=(class DynamicPropertiesComponent&&); // NOLINT
};
