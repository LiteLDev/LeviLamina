#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
struct AttributeInstanceForwarder;
// clang-format on

struct ValidMutableAttributeWithContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef const>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext const> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeInstanceForwarder* operator->();
    // NOLINTEND
};
