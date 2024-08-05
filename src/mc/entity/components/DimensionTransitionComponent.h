#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionTransitionComponent {
public:
    // prevent constructor by default
    DimensionTransitionComponent& operator=(DimensionTransitionComponent const&);
    DimensionTransitionComponent(DimensionTransitionComponent const&);
    DimensionTransitionComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI struct DimensionTransitionComponent& operator=(struct DimensionTransitionComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI static std::string const AXIS_TAG;

    MCAPI static std::string const COMPONENT_TAG;

    MCAPI static std::string const DIMENSION_TAG;

    MCAPI static std::string const POSITION_X_TAG;

    MCAPI static std::string const POSITION_Y_TAG;

    MCAPI static std::string const POSITION_Z_TAG;

    // NOLINTEND
};
