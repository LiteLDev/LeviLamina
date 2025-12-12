#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceHandle.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
struct AttributeModificationContext;
// clang-format on

class AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AttributeInstanceHandle> mAttributeHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeInstanceDelegate() = default;

    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);

    virtual void notify(int64, ::AttributeModificationContext&);

    virtual bool willChange(float, float, ::AttributeBuff const&);

    virtual float change(float, float newValue, ::AttributeBuff const&);

    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeInstance* _getMutableInstance(::AttributeModificationContext& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tick(::AttributeInstance&, ::AttributeModificationContext&);

    MCFOLD void $notify(int64, ::AttributeModificationContext&);

    MCFOLD bool $willChange(float, float, ::AttributeBuff const&);

    MCAPI float $change(float, float newValue, ::AttributeBuff const&);

    MCAPI float $getBuffValueWithModifiers(::AttributeBuff const& buff) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
