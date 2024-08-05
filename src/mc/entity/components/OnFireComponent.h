#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {
public:
    // prevent constructor by default
    OnFireComponent& operator=(OnFireComponent const&);
    OnFireComponent(OnFireComponent const&);
    OnFireComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class Actor const&, class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag);

    MCAPI static void convertFromLegacyData(class CompoundTag const& tag, class CompoundTag&);

    MCAPI static bool needsLegacyConversion(class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const LEGACY_FIRE_TAG;

    MCAPI static std::string const ON_FIRE_TAG;

    // NOLINTEND
};
