#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ActorItemTintStrategy.h"
#include "mc/world/item/NoItemTintStrategy.h"

struct ItemTintStrategy {
public:
    // ItemTintStrategy inner types define
    using Variant = ::std::variant<::NoItemTintStrategy, ::ActorItemTintStrategy>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::variant<::NoItemTintStrategy, ::ActorItemTintStrategy>> mData;
    // NOLINTEND
};
