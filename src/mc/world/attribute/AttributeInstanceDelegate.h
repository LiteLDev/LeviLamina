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

    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);

    virtual void notify(int64 type, ::AttributeModificationContext& context);

    virtual bool willChange(float oldValue, float newValue, ::AttributeBuff const& buff);

    virtual ::std::optional<float> change(float oldValue, float newValue, ::AttributeBuff const& buff);

    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);

    MCFOLD void $notify(int64 type, ::AttributeModificationContext& context);

    MCFOLD bool $willChange(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI ::std::optional<float> $change(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI float $getBuffValueWithModifiers(::AttributeBuff const& buff) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
