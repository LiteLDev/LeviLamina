#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
// clang-format on

struct AttributeInstanceForwarder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void removeModifier(::std::shared_ptr<::AttributeModifier> modifier);
#endif
    // NOLINTEND
};
