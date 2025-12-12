#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
struct AttributeModificationContext;
// clang-format on

class ExhaustionAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context) /*override*/;

    // vIndex: 0
    virtual ~ExhaustionAttributeDelegate() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
