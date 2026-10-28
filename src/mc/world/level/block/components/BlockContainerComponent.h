#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockContainerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                           mSlotCount;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTitle;
    // NOLINTEND
};
