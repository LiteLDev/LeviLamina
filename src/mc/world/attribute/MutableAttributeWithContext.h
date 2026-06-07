#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
struct AttributeInstanceForwarder;
struct ValidMutableAttributeWithContext;
// clang-format on

struct MutableAttributeWithContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    MutableAttributeWithContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MutableAttributeWithContext(::ValidMutableAttributeWithContext const& context);

    MCAPI MutableAttributeWithContext(::AttributeInstanceRef instance, ::AttributeModificationContext context);

    MCFOLD explicit operator bool() const;

    MCFOLD bool operator!=(nullptr_t) const;

    MCFOLD ::AttributeInstanceForwarder const* operator->() const;

    MCFOLD ::AttributeInstanceForwarder* operator->();

    MCAPI bool operator==(nullptr_t) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ValidMutableAttributeWithContext const& context);

    MCFOLD void* $ctor(::AttributeInstanceRef instance, ::AttributeModificationContext context);
    // NOLINTEND
};
