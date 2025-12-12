#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
// clang-format on

struct MutableAttributeWithContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstance*>           mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND
};
