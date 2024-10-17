#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct MinorVersionPromotion {
public:
    // prevent constructor by default
    MinorVersionPromotion& operator=(MinorVersionPromotion const&);
    MinorVersionPromotion(MinorVersionPromotion const&);
    MinorVersionPromotion();

public:
    // NOLINTBEGIN
    MCAPI MinorVersionPromotion(struct Scripting::MinorVersionPromotion&&);

    MCAPI ~MinorVersionPromotion();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Scripting::MinorVersionPromotion&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
