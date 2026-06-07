#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

class ScenePrepareSystem {
public:
    // ScenePrepareSystem inner types declare
    // clang-format off
    struct NonTransparentSortKey;
    struct OrderDependentSortKey;
    class TransparentSortKey;
    // clang-format on

    // ScenePrepareSystem inner types define
    struct NonTransparentSortKey {};

    struct OrderDependentSortKey {};

    class TransparentSortKey {};
};

} // namespace dragon::framerenderer
