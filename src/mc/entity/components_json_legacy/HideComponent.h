#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HideComponent {
public:
    // prevent constructor by default
    HideComponent& operator=(HideComponent const&);
    HideComponent(HideComponent const&);

public:
    // NOLINTBEGIN
    MCAPI HideComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void initFromDefinition(class Actor&);

    MCAPI bool isInRaid();

    MCAPI bool isReactingToBell();

    MCAPI void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setInRaid();

    MCAPI void setNotHiding();

    MCAPI void setReactingToBell();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
