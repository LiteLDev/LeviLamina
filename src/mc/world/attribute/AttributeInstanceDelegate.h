#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
class AttributeInstanceHandle;
// clang-format on

class AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::AttributeInstanceHandle> mAttributeHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeInstanceDelegate() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void notify(int64);

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
    MCAPI ::AttributeInstance const& _getInstance() const;

    MCAPI ::AttributeInstance* _getMutableInstance() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tick();

    MCFOLD void $notify(int64);

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
