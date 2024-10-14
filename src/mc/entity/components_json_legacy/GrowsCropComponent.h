#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GrowsCropComponent {
public:
    // prevent constructor by default
    GrowsCropComponent& operator=(GrowsCropComponent const&);
    GrowsCropComponent(GrowsCropComponent const&);

public:
    // NOLINTBEGIN
    MCAPI GrowsCropComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
