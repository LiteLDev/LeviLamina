#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

struct QueuedCursorItemEvent {
public:
    // QueuedCursorItemEvent inner types define
    enum class DispatchPolicy : uchar {
        DeferDuringCursorDrag    = 0,
        DispatchDuringCursorDrag = 1,
    };

    enum class Type : uchar {
        Grab    = 0,
        Release = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::QueuedCursorItemEvent::Type>           mType;
    ::ll::TypedStorage<8, 152, ::ItemStack>                           mItem;
    ::ll::TypedStorage<1, 1, ::QueuedCursorItemEvent::DispatchPolicy> mDispatchPolicy;
    // NOLINTEND
};
