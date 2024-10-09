#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicPropertiesComponent {
public:
    // prevent constructor by default
    DynamicPropertiesComponent& operator=(DynamicPropertiesComponent const&);
    DynamicPropertiesComponent(DynamicPropertiesComponent const&);
    DynamicPropertiesComponent();

public:
    // NOLINTBEGIN
    MCAPI DynamicPropertiesComponent(class DynamicPropertiesComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class ILevel& level) const;

    MCAPI class DynamicProperties& getProperties();

    MCAPI class DynamicPropertiesComponent& operator=(class DynamicPropertiesComponent&&);

    // NOLINTEND
};
