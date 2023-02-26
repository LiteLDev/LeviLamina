/**
 * @file  DynamicPropertiesComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicPropertiesComponent.
 *
 */
class DynamicPropertiesComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICPROPERTIESCOMPONENT
public:
    class DynamicPropertiesComponent& operator=(class DynamicPropertiesComponent const &) = delete;
    DynamicPropertiesComponent(class DynamicPropertiesComponent const &) = delete;
    DynamicPropertiesComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0DynamicPropertiesComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DynamicPropertiesComponent(class DynamicPropertiesComponent &&);
    /**
     * @symbol  ?addAdditionalSaveData\@DynamicPropertiesComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?getProperties\@DynamicPropertiesComponent\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties & getProperties();
    /**
     * @symbol  ??4DynamicPropertiesComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DynamicPropertiesComponent & operator=(class DynamicPropertiesComponent &&);

};