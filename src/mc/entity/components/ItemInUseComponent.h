#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

struct ItemInUseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WeakPtr<::Item const>> mItem;
    ::ll::TypedStorage<4, 4, int>                     mDuration;
    // NOLINTEND
};
