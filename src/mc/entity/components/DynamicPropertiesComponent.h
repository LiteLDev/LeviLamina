#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicPropertiesComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICPROPERTIESCOMPONENT
public:
    DynamicPropertiesComponent& operator=(DynamicPropertiesComponent const&) = delete;
    DynamicPropertiesComponent(DynamicPropertiesComponent const&)            = delete;
    DynamicPropertiesComponent()                                             = delete;
#endif

public:
    /**
     * @symbol ??0DynamicPropertiesComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DynamicPropertiesComponent(class DynamicPropertiesComponent&&);
    /**
     * @symbol ?addAdditionalSaveData\@DynamicPropertiesComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getProperties\@DynamicPropertiesComponent\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties& getProperties();
    /**
     * @symbol ??4DynamicPropertiesComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DynamicPropertiesComponent& operator=(class DynamicPropertiesComponent&&);
};
