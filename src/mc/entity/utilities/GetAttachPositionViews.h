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
    MCAPI void* ctor$(struct GetAttachPositionViews&&);

    // NOLINTEND
};
