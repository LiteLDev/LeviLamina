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
    // symbol: ??0MinorVersionPromotion@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI MinorVersionPromotion(struct Scripting::MinorVersionPromotion&&);

    // symbol: ??1MinorVersionPromotion@Scripting@@QEAA@XZ
    MCAPI ~MinorVersionPromotion();

    // NOLINTEND
};

}; // namespace Scripting
