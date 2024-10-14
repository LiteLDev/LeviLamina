#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GetAttachPositionViews {
public:
    // prevent constructor by default
    GetAttachPositionViews& operator=(GetAttachPositionViews const&);
    GetAttachPositionViews(GetAttachPositionViews const&);
    GetAttachPositionViews();

public:
    // NOLINTBEGIN
    MCAPI GetAttachPositionViews(struct GetAttachPositionViews&&);

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
