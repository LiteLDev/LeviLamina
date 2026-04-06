#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreDataDrivenScreenController {
public:
    // StoreDataDrivenScreenController inner types declare
    // clang-format off
    class RefreshController;
    // clang-format on

    // StoreDataDrivenScreenController inner types define
    class RefreshController {
    public:
        // RefreshController inner types define
        enum class RefreshCondition : int {
            // bitfield representation
            NoRefresh          = 0,
            RefreshOnEnter     = 1 << 0,
            RefreshOnTickOnce  = 1 << 1,
            RefreshOnEnterOnce = 1 << 2,
            RefreshScrollbar   = 1 << 3,
        };
    };
};
