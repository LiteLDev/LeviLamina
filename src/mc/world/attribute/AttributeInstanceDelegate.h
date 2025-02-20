#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
class AttributeInstanceHandle;
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
    // vIndex: 0
    virtual ~AttributeInstanceDelegate() = default;

    // vIndex: 1
    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);

    // vIndex: 2
    virtual void notify(int64, ::AttributeModificationContext&);

    // vIndex: 3
    virtual bool willChange(float, float, ::AttributeBuff const&);

    // vIndex: 4
    virtual float change(float, float newValue, ::AttributeBuff const&);

    // vIndex: 5
    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeInstance* _getMutableInstance(::AttributeModificationContext& context) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
