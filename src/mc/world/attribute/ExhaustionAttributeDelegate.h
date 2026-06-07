#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class AttributeInstanceConstRef;
struct AttributeModificationContext;
// clang-format on

class ExhaustionAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // prevent constructor by default
    ExhaustionAttributeDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExhaustionAttributeDelegate(::AttributeInstanceConstRef _attribute);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeInstanceConstRef _attribute);
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
