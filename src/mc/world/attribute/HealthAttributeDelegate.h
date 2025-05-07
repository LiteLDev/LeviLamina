#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
class Mob;
struct AttributeModificationContext;
// clang-format on

class HealthAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mTickCounter;
    ::ll::TypedStorage<8, 8, ::Mob*> mMob;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context) /*override*/;

    // vIndex: 3
    virtual bool willChange(float oldValue, float newValue, ::AttributeBuff const& buff) /*override*/;

    // vIndex: 4
    virtual float change(float oldValue, float newValue, ::AttributeBuff const& buff) /*override*/;

    // vIndex: 5
    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const /*override*/;

    // vIndex: 0
    virtual ~HealthAttributeDelegate() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);

    MCAPI bool $willChange(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI float $change(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI float $getBuffValueWithModifiers(::AttributeBuff const& buff) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
