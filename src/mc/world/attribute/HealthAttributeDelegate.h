#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
class Mob;
// clang-format on

class HealthAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf99f9d;
    ::ll::UntypedStorage<8, 8> mUnk812c64;
    // NOLINTEND

public:
    // prevent constructor by default
    HealthAttributeDelegate& operator=(HealthAttributeDelegate const&);
    HealthAttributeDelegate(HealthAttributeDelegate const&);
    HealthAttributeDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tick() /*override*/;

    // vIndex: 3
    virtual bool willChange(float oldValue, float newValue, ::AttributeBuff const& buff) /*override*/;

    // vIndex: 4
    virtual float change(float oldValue, float newValue, ::AttributeBuff const& buff) /*override*/;

    // vIndex: 5
    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const /*override*/;

    // vIndex: 0
    virtual ~HealthAttributeDelegate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HealthAttributeDelegate(::AttributeInstance const& attribute, ::Mob* mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeInstance const& attribute, ::Mob* mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick();

    MCAPI bool $willChange(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI float $change(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI float $getBuffValueWithModifiers(::AttributeBuff const& buff) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
